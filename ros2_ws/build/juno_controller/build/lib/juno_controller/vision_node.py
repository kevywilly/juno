import rclpy
from rclpy.node import Node
from jetson_utils import videoSource, cudaMemcpy, cudaToNumpy
from juno_controller import settings
from sensor_msgs.msg import Image


class VisionNode(Node):
    
    def __init__(self, source1, source2 = None):
        super().__init__("vision_node")

        self.get_logger().info("starting vision...")

        self._input1, self._value1 = self._initialize_input(source1)
        
        if source2:
            self._input2, self._value2 = self._initialize_input(source1)
        else:
            self._input2, self._value2 = (None, None)
    
        self.get_logger().info("vision started.")
        
        self.create_timer(1.0/60.0, self._read)
        #while True:
        #    self._read()
        
    def _initialize_input(self, source):
        input = videoSource(source, argv=['--input-flip=rotate-180'])
        value = input.Capture()
        if value:
            self.get_logger().info(f"Input {source} OK")
        else:
            self.get_logger().error(f"Input {source} FAIL")

        return input, value

    def _capture(self, input):

        value = input.Capture()

        if value is None:
            self.get_logger().error("Capture FAIL")
        else:
            self.get_logger().info("Capture OK")
        
        return value

    def _parse_image(cuda_img):
        image = Image
        cv_image = cudaToNumpy(cuda_img)
        h,w = cv_image.shape[:-1]
        image.width = w
        image.height = h
        image.data = cv_image
        image.is_bigendian = False
        

    def _read(self):
        if self._input1 is None:
            self.get_logger().warn("Skipping capture. There are no configured input devices.")
            return

        img1  = self._capture(input=self._input1)
        if img1 is not None:
            self._value1 = img1

        if self._input2:
            img2  = self._capture(input=self._input1)
            if img2 is not None:
                self._value2 = img2
        

    def _close(self):
        if self._input1:
            self._input1.Close()
        if self._input2:
            self._input2.Close()


def main(args=None):
    rclpy.init(args=args)
    node = VisionNode(source1="csi://0")
    rclpy.spin(node=node)
    node._close()
    rclpy.shutdown()
    
