import rclpy
from rclpy.node import Node
from jetson_utils import videoSource, cudaMemcpy
from juno_controller import settings


class CameraNode(Node):
    
    def __init__(self):
        super().__init__("camera_node")

        self.get_logger().info("starting camera...")

        self.stereo = settings.cam_stereo
        self.value1 = None
        self.value2 = None

        self.input1 = videoSource(self.source1, argv=['--input-flip=rotate-180'])
        
        if self.stereo:
            self.input2 = videoSource(self.source2, argv=['--input-flip=rotate-180'])

        timer = self.create_timer(1.0, self._read)

        self.get_logger().info("camera started.")
        

    def _read(self):
        self.get_logger().info("reading camera")
        img1 = self.input1.Capture()
        if img1 is not None:
            self.value1 = img1
            if not self.stereo:
                self.value2 = cudaMemcpy(img1)
        else:
            print("invalid capture for input 1")
            return

        if self.stereo:
            img2 = self.input2.Capture()
            if img2 is not None:
                self.value2 = img2
            else:
                print("invalid capture for input 2")


    def _close(self):
        if self.input1:
            self.input1.Close()
        if self.input2:
            self.input2.Close()


def main(args=None):
    rclpy.init(args=args)
    node = CameraNode()
    rclpy.spin(node=node)
    node._close()
    rclpy.shutdown()
    
