import rclpy
from rclpy.node import Node
from Adafruit_MotorHAT import Adafruit_MotorHAT
from juno_controller import Motor
from geometry_msgs.msg import Twist

class DrivetrainNode(Node):

    def __init__(self):
        super().__init__("drivetrain_node")

        self.get_logger().info("starting motors...")
        self.i2c_bus = 1
        self.mode = 2
        self.m1_channel = 1
        self.m1_alpha = 1.0
        self.m2_channel = 2
        self.m2_alpha = 1.0
        self.m3_channel = 3
        self.m3_alpha = 1.0
        self.m4_channel = 4
        self.m4_alpha = 1.0

        self.motor_driver = Adafruit_MotorHAT(addr=0x60, i2c_bus=self.i2c_bus)
        
        self.m1 = Motor(self.motor_driver, channel=self.m1_channel, alpha=self.m1_alpha, reversed=True)
        self.m2 = Motor(self.motor_driver, channel=self.m2_channel, alpha=self.m2_alpha, reversed=True)
        self.m3 = Motor(self.motor_driver, channel=self.m3_channel, alpha=self.m3_alpha, reversed=True)
        self.m4 = Motor(self.motor_driver, channel=self.m4_channel, alpha=self.m4_alpha, reversed=True)
        self.motors = [self.m1, self.m2, self.m3, self.m4]
        
        self.get_logger().info("motors started.")
        self.create_subscription(Twist, "drivetrain/cmd", self.handle_cmd, 10)

    def log(self, txt: str):
        self.get_logger().info(txt)

    def set_motors(self, speeds):
        for idx, speed in enumerate(speeds):
            self.motors[idx].set_value(speed)

    def forward(self, speed=0.3):
        self.log(f"MV: Forward {speed}.")
        for motor in self.motors:
            motor.set_value(speed)

    def backward(self, speed=1.0):
        self.log(f"MV: Backward {speed}.")
        for motor in self.motors:
            motor.set_value(-speed)

    def left(self, speed=1.0):
        self.log(f"MV: Left {speed}.")
        for idx, motor in enumerate(self.motors):
            motor.set_value(speed if idx % 2 else -speed)

    def slide_left(self, speed=1.0):
        self.log(f"MV: Left {speed}.")
        for idx, motor in enumerate(self.motors):
            motor.set_value(-speed if (idx == 0 or idx == 3) else speed)

    def forward_left(self, speed=1.0):
        self.log(f"MV: SRight {speed}.")
        for idx, motor in enumerate(self.motors):
            motor.set_value(0 if (idx == 0 or idx == 3) else speed)

    def backward_left(self, speed=1.0):
        self.log(f"MV: SRight {speed}.")
        for idx, motor in enumerate(self.motors):
            motor.set_value(0 if (idx == 0 or idx == 3) else -speed)

    def right(self, speed=1.0):
        self.log(f"MV: Right {speed}.")
        for idx, motor in enumerate(self.motors):
            motor.set_value(-speed if idx % 2 else speed)

    def slide_right(self, speed=1.0):
        self.log(f"MV: SRight {speed}.")
        for idx, motor in enumerate(self.motors):
            motor.set_value(speed if (idx == 0 or idx == 3) else -speed)


    def forward_right(self, speed=1.0):
        self.log(f"MV: SRight {speed}.")
        for idx, motor in enumerate(self.motors):
            motor.set_value(speed if (idx == 0 or idx == 3) else 0)


    def backward_right(self, speed=1.0):
        self.log(f"MV: SRight {speed}.")
        for idx, motor in enumerate(self.motors):
            motor.set_value(-speed if (idx == 0 or idx == 3) else 0)


    def stop(self):
        self.log(f"MoveStop.")
        for motor in self.motors:
            motor.set_value(0)


    def move_x(self, speed):
        self.log(f"MoveX {speed}.")
        for motor in self.motors:
            motor.set_value(speed)


    def move_y(self, speed):
        self.log(f"MoveY: {speed}.")
        for idx, motor in enumerate(self.motors):
            motor.set_value(speed if (idx == 0 or idx == 3) else -speed)


    def move_x_y(self, v_x, v_y):
        self.log(f"MoveXY {v_x},{v_y}.")
        for idx, motor in enumerate(self.motors):
            motor.set_value(v_x if (idx == 0 or idx == 3) else v_y)


    def move_z(self, speed):
        self.log(f"MoveZ {speed}.")
        for idx, motor in enumerate(self.motors):
            motor.set_value(-speed if idx % 2 else speed)


    def handle_cmd(self, msg: Twist):

        self.log(f"x: {msg.linear.x}, y: {msg.linear.y}: za: {msg.angular.z}")

        if msg.linear.x !=0 and msg.linear.y != 0:
            #self.stop()
            self.move_x_y(msg.linear.x, msg.linear.y)
        elif msg.linear.x != 0:
            #self.stop()
            self.move_x(msg.linear.x)
        elif msg.linear.y != 0:
            #self.stop()
            self.move_y(msg.linear.y)
        elif msg.angular.z !=0:
            self.move_z(msg.angular.z)
        else:
            self.stop()

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
