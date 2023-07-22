import atexit
import rclpy
from rclpy.node import Node
import torch
import torch.nn.functional as F
import torch.optim as optim
import torchvision.datasets as datasets
import torchvision.transforms as transforms
from juno_controller.settings import settings
from juno_controller.config import TrainingConfig, MODELS_ROOT, BEST_MODELS_ROOT
import torchvision.models as models
import os

torch.hub.set_dir(MODELS_ROOT)

class TrainerNode(Node):

    def log(self, txt: str):
        self.get_logger().info(txt)

    def __init__(self):

        super().__init__("trainer_node")

        self.config = settings.default_model
        self.epochs = 60
        self.retrain = os.path.exists(settings.default_model.get_best_model_path())
        self.cam_index = 1
        self.train_pct: float = 0.5
        self.learning_rate: float = 0.001
        self.momentum: float = 0.9

        self.log(f"Trainer loaded: {self.config}, epochs: {self.epochs}, retrain: {self.retrain}")
        self.log(f"cam index = {self.cam_index}")
        

    def train(self):

        self.log("loading datasets...")

        model = models.alexnet(pretrained=True)

        self.log(f"using path {self.config.get_data_path(self.cam_index)} for training data.")

        dataset = datasets.ImageFolder(
            self.config.get_data_path(self.cam_index),
            transforms.Compose([
                transforms.ColorJitter(0.1, 0.1, 0.1, 0.1),
                transforms.Resize((224, 224)),
                transforms.ToTensor(),
                transforms.Normalize([0.485, 0.456, 0.406], [0.229, 0.224, 0.225])
            ]))

        datapoints = len(dataset)
        train_size = int(self.train_pct * datapoints)
        test_size = datapoints - train_size

        self.log(f"found {datapoints} datapoints.")

        train_dataset, test_dataset = torch.utils.data.random_split(dataset, [train_size,test_size])

        train_loader = torch.utils.data.DataLoader(
            train_dataset,
            batch_size=8,
            shuffle=True,
            num_workers=0
        )

        test_loader = torch.utils.data.DataLoader(
            test_dataset,
            batch_size=8,
            shuffle=True,
            num_workers=0
        )

        print(f"loading model...{self.config.model_name}")

        num_cats = len(self.config.categories)

        print(f"Categories: {num_cats}")
        
        model.classifier[6] = torch.nn.Linear(model.classifier[6].in_features, num_cats)

        print("training model...")

        NUM_EPOCHS = 30
        BEST_MODEL_PATH = self.config.get_best_model_path(self.cam_index)
        best_accuracy = 0.0
        
        self.log(f"Best model path: {BEST_MODEL_PATH}")

        if os.path.isfile(BEST_MODEL_PATH):
                print(f"loading best model from {BEST_MODEL_PATH}")
                model.load_state_dict(torch.load(BEST_MODEL_PATH))

       

        self.log(f"\n============ ROUND {round} =================")

        device = torch.device('cuda')
        model = model.to(device)

        optimizer = optim.SGD(model.parameters(), lr=self.learning_rate, momentum=self.momentum)

        for epoch in range(NUM_EPOCHS):

            for images, labels in iter(train_loader):
                images = images.to(device)
                labels = labels.to(device)
                optimizer.zero_grad()
                outputs = model(images)
                loss = F.cross_entropy(outputs, labels)
                loss.backward()
                optimizer.step()

            test_error_count = 0.0

            for images, labels in iter(test_loader):
                images = images.to(device)
                labels = labels.to(device)
                outputs = model(images)
                #test_error_count += float(torch.sum(torch.abs(labels - outputs.argmax(1))))
                #test_error_count += float(torch.sum(torch.abs(labels - outputs.argmax(1))))
                #err = len(torch.nonzero(outputs.argmax(1) - labels).flatten())
                test_error_count += len(torch.nonzero(outputs.argmax(1) - labels).flatten())

            self.log(f"error_count: {test_error_count}, dataset_len: {len(test_dataset)}")

            test_accuracy = 1.0 - float(test_error_count) / float(len(test_dataset))

            self.log('EPOCH %d: ACCURACY %f' % (epoch, test_accuracy))

            if test_accuracy > best_accuracy:
                self.log(f"saving best model... with accuracy: {test_accuracy}")
                torch.save(model.state_dict(), BEST_MODEL_PATH)
                best_accuracy = test_accuracy

            

def main(args=None):
    #rclpy.init(args=args)
    node = TrainerNode()
    node.train()
    #torch.cuda.empty_cache()
    #rclpy.shutdown()
