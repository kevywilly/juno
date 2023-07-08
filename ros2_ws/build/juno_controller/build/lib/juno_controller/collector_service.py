#!/usr/bin/python3

from juno_interfaces.srv import CollectImage
import rclpy

from rclpy.node import Node

class CollectImageService(Node):
    def __init__(self):
        super().__init__("collect_image")
        self.srv = self.create_service(CollectImage, 'collect_image', self.collect_image_callback)

    def collect_image_callback(self, request, response):
        response.count = 100


def main():
    rclpy.init()
    svc = CollectImageService()
    rclpy.spin(svc)
    rclpy.shutdown

if __name__ == '__main__':
    main()