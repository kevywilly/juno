#!/usr/bin/python3

from juno_interfaces.srv import CollectImage, Categories
from juno_interfaces.msg import Category
import rclpy
from juno_controller.config import TrainingConfig
from juno_controller.settings import settings
from cv_bridge import CvBridge, CvBridgeError
import cv2
import os
from pathlib import Path
from uuid import uuid1

from rclpy.node import Node

class CollectImageService(Node):
    def __init__(self):
        super().__init__("collect_image")
        self.create_service(CollectImage, 'collect_image', self.collect_image_callback)
        self.create_service(Categories, 'categories', self.categories_callback)
        self.config = settings.default_model
        self.bridge = CvBridge()
        self._make_folders()
        self.counts = {}
        self._generate_counts()


    def collect_image_callback(self, request, response):
        self.get_logger().info(f"Got request for category {request.category}")
        cv2_img = self.bridge.imgmsg_to_cv2(request.image, "bgr8")
        img = bytes(cv2.imencode('.jpg', cv2_img)[1])
        response.count = self.collect(request.category, [img,img])
        return response
    
    def categories_callback(self, request, response):
        ar = []
        for (name, count) in self.counts.items():
            c = Category()
            c.name = name
            c.count = count
            ar.append(c)
        
        response.categories = ar
        return response

    
    def category_path(self, category: str, cam_index=1) -> str:
        return os.path.join(self.config.get_data_path(cam_index), category.replace(" ", "_"))
    
    
    def get_count(self, category: str) -> int:
        value = len(os.listdir(self.category_path(category, 1)))
        self.counts[category] = value
        return value

    def _generate_counts(self):
        for category in self.config.categories:
            self.get_count(category)

    def make_folders(self):
        pass

    def _make_folders(self):
        for category in self.config.categories:
            for i in range(self.config.num_cameras):
                try:
                    os.makedirs(self.category_path(category, i+1))
                except FileExistsError:
                    pass
                except Exception as ex:
                    print(ex)
                    raise ex

    def collect(self, category: str, images) -> int:
        self.get_logger().info(f"collecting {len(images)} for {category}")
        
        if category in self.config.categories:
            name = str(uuid1()) + ".jpg"
            for index, image in enumerate(images):
                pth = os.path.join(
                    self.category_path(category, index+1),
                    name
                )
                
                with open(pth, 'wb') as f:
                    print(f"writing to {pth}")
                    try:
                        f.write(image)
                    except Exception as ex:
                        self.get_logger().error(str(ex))
                

            return self.get_count(category)

def main():
    rclpy.init()
    svc = CollectImageService()
    rclpy.spin(svc)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
