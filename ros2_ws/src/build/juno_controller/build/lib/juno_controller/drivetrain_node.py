import rclpy
from rclpy.node import Node
from Adafruit_MotorHAT import Adafruit_MotorHAT
from juno_controller import settings
from juno_controller import Motor

class DrivetrainNode(Node):

    def __init__(self):
        super().__init__("drivetrain_node")

        self.get_logger().info("starting motors...")
        self.i2c_bus = 1
        self.mode = 2
        self.m1_channel = 1
        self.m1_alpha = 0
        self.m2_channel = 2
        self.m2_alpha = 0
        self.m3_channel = 3
        self.m3_alpha = 0
        self.m4_channel = 4
        self.m4_alpha = 0

        self.motor_driver = Adafruit_MotorHAT(addr=0x60, i2c_bus=self.i2c_bus)
        
        self.m1 = Motor(self.motor_driver, channel=self.m1_channel, alpha=self.m1_alpha)
        self.m2 = Motor(self.motor_driver, channel=self.m2_channel, alpha=self.m2_alpha)
        self.m3 = Motor(self.motor_driver, channel=self.m3_channel, alpha=self.m3_alpha)
        self.m4 = Motor(self.motor_driver, channel=self.m4_channel, alpha=self.m4_alpha)
        self.motors = [self.m1, self.m2, self.m3, self.m4]
        self.get_logger().info("motors started.")

    def set_motors(self, speeds):
        for idx, speed in enumerate(speeds):
            self.motors[idx].value = speed

    def forward(self, speed=0.3):
        self.log(f"MV: Forward {speed}.")
        for motor in self.motors:
            motor.value = speed

    def backward(self, speed=1.0):
        self.log(f"MV: Backward {speed}.")
        for motor in self.motors:
            motor.value = -speed

    def left(self, speed=1.0):
        self.log(f"MV: Left {speed}.")
        for idx, motor in enumerate(self.motors):
            motor.value = speed if idx % 2 else -speed

    def slide_left(self, speed=1.0):
        self.log(f"MV: Left {speed}.")
        for idx, motor in enumerate(self.motors):
            motor.value = -speed if (idx == 0 or idx == 3) else speed

    def forward_left(self, speed=1.0):
        self.log(f"MV: SRight {speed}.")
        for idx, motor in enumerate(self.motors):
            motor.value = 0 if (idx == 0 or idx == 3) else speed

    def backward_left(self, speed=1.0):
        self.log(f"MV: SRight {speed}.")
        for idx, motor in enumerate(self.motors):
            motor.value = 0 if (idx == 0 or idx == 3) else -speed

    def right(self, speed=1.0):
        self.log(f"MV: Right {speed}.")
        for idx, motor in enumerate(self.motors):
            motor.value = -speed if idx % 2 else speed

    def slide_right(self, speed=1.0):
        self.log(f"MV: SRight {speed}.")
        for idx, motor in enumerate(self.motors):
            motor.value = speed if (idx == 0 or idx == 3) else -speed

    def forward_right(self, speed=1.0):
        self.log(f"MV: SRight {speed}.")
        for idx, motor in enumerate(self.motors):
            motor.value = speed if (idx == 0 or idx == 3) else 0

    def backward_right(self, speed=1.0):
        self.log(f"MV: SRight {speed}.")
        for idx, motor in enumerate(self.motors):
            motor.value = -speed if (idx == 0 or idx == 3) else 0

    def stop(self):
        self.log(f"MV: Stop.")
        for motor in self.motors:
            motor.value = 0

    def drive(self, cmd: str, speed: float):
        cmd = cmd.lower()
        s = speed

        if cmd == "forward":
            self.forward(s)
        elif cmd == "forward_right":
            self.forward_right(s)
        elif cmd == "forward_left":
            self.forward_left(s)
        elif cmd == "backward":
            self.backward(s)
        elif cmd == "backward_right":
            self.backward_right(s)
        elif cmd == "backward_left":
            self.backward_left(s)
        elif cmd == "left" or cmd == "turn_left":
            self.left(s)
        elif cmd == "right" or cmd == "turn_right":
            self.right(s)
        elif cmd == "slide_left":
            self.slide_left(s)
        elif cmd == "slide_right":
            self.slide_right(s)
        else:
            self.stop()

def main(args=None):
    rclpy.init(args=args)
    node = DrivetrainNode()
    rclpy.spin(node=node)
    node.stop()
    rclpy.shutdown