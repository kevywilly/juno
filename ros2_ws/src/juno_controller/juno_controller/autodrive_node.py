import rclpy
from rclpy.node import Node
from Adafruit_MotorHAT import Adafruit_MotorHAT
from juno_controller.motor import Motor
from geometry_msgs.msg import Twist
from juno_interfaces.srv import Toggle
from sensor_msgs.msg import Image
from juno_controller.image_utils import (sensor_image_to_cuda, resize_cuda)
from juno_controller.settings import settings
from juno_controller.config import TrainingConfig, MODELS_ROOT, BEST_MODELS_ROOT
import os
import numpy as np
import torch
import torch.nn.functional as F
import torchvision
from juno_controller.drive_commands import apply_drive_cmd
from enum import Enum

torch.hub.set_dir(MODELS_ROOT)

class DriveState(Enum):
    STOPPED = 0
    DRIVING = 1
    AVOIDING = 2

class AutodriveNode(Node):

    def __init__(self):
        super().__init__("autodrive_node")

        self.log("Started autodrive node.")
        self.config = settings.default_model
        self.drive_state = DriveState.STOPPED
        self.mean = 255.0 * np.array([0.485, 0.456, 0.406])
        self.stdev = 255.0 * np.array([0.229, 0.224, 0.225])
        self.normalize = torchvision.transforms.Normalize(self.mean, self.stdev)
        self._load_model()
        self.running = False
        

        # publishers
        self.drivetrain_publisher = self.create_publisher(Twist, '/drivetrain/cmd', 10)
        self.log("Created Drivetrain Publisher")


        # subscriptions
        self.image_subscription = self.create_subscription(Image, "/video_source/raw", self.autodrive, 10)
        self.log("Subscribed to Image Topic")

        self.svc = self.create_service(Toggle, 'toggle_autodrive', self.toggle_status)
        self.log("Initialized autodrive node.")
        

    def toggle_status(self, request, response):
        self.log(f"Setting autodrive running state to {request.on}")
        self.start() if request.on else self.stop()
        response.status = self.running
        return response

    def log(self, txt: str):
        self.get_logger().info(txt)


    def stop_drivetrain(self):
        msg = Twist()
        self.drivetrain_publisher.publish(msg)
        self.drive_state = DriveState.STOPPED

    def start(self):
        self.running = True
        self.drive_state = DriveState.STOPPED


    def stop(self):
        self.running = False

    def _load_model(self):
        self.log("preparing model...")

        self.log(self.config.get_best_model_path())
        has_model = os.path.isfile(self.config.get_best_model_path())

        self.model = self.config.load_model(pretrained=(not has_model))
        self.device = torch.device('cuda')

        cat_count = len(self.config.categories)

        # create model
        if self.config.model_name == "alexnet":
            self.model.classifier[6] = torch.nn.Linear(self.model.classifier[6].in_features, cat_count)
        elif self.config.model_name == "resnet18":
            self.model.fc = torch.nn.Linear(512, cat_count)
            self.model.eval().half()

        if has_model:
            self.log("loading state...")
            self.model.load_state_dict(torch.load(self.config.get_best_model_path()))
        else:
            self.log("skipping state load - model does not exist yet")

        self.model = self.model.to(self.device)

        self.log("model ready...")

    def _preprocess(self, sensor_image):
        cuda_image = sensor_image_to_cuda(sensor_image)
        x = resize_cuda(cuda_image, 224, 224)
        x = np.transpose(x, (2, 0, 1))
        x = torch.as_tensor(x, device='cuda').float()
        x = self.normalize(x)
        x = x[None, ...]
        return x

    def predict(self, sensor_image):
        input = self._preprocess(sensor_image=sensor_image)
        output = self.model(input)
        output = F.softmax(output, dim=1)
        return output

    def _assign_predictions(self, y, categories):
        categories = sorted(settings.default_model.categories.copy())
        d = {}
        for index, cat in enumerate(categories):
            d[cat] = float(y.flatten()[index])
        predictions = sorted(d.items(),key=lambda x:x[1], reverse=True)
        return predictions

    def autodrive(self, sensor_image: Image):
        if not self.running:
            self.drive_state = DriveState.STOPPED
            return

        y = self.predict(sensor_image)

        predictions = self._assign_predictions(y, settings.default_model.categories)

        k,v = predictions[0]

        new_state = DriveState.DRIVING if k == "forward" else DriveState.AVOIDING
        
        if new_state != self.drive_state:
            self.log("6")
            self.drive_state = new_state
            self.drivetrain_publisher.publish(apply_drive_cmd(k, settings.robot_drive_speed))
    

def main(args=None):
    rclpy.init(args=args)
    node = AutodriveNode()
    rclpy.spin(node=node)
    node.stop()
    torch.cuda.empty_cache()
    rclpy.shutdown
