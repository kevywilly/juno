import rclpy
import signal
from rclpy.node import Node
from std_msgs.msg import String
from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist
import threading
from flask_cors import CORS
from flask import Flask, Response, jsonify
import cv2 as cv
from cv_bridge import CvBridge, CvBridgeError

class JunoApiNode(Node):
    def __init__(self):
        super().__init__('juno_api_node')
        # publishers
        self.drivetrain_publisher = self.create_publisher(Twist, '/drivetrain/cmd', 10)

        # subscriptions
        self.create_subscription(Image, "/video_source/raw", self.image_callback, 10)
       
        self.image: Image = None
        self.bridge = CvBridge()


    def drive(self, direction: str, speed: float):
        d = direction.upper()
        msg = Twist()
        
        if d == "FORWARD":
            msg.linear.x = speed
        elif d == "BACKWARD":
            msg.linear.x = -speed
        elif d == "RIGHT":
            msg.angular.z = speed
        elif d == "LEFT":
            msg.angular.z = -speed
        elif d == "SLIDE_LEFT":
            msg.linear.y = -speed
        elif d == "SLIDE_RIGHT":
            msg.linear.y = speed
            
        self.drivetrain_publisher.publish(msg)

    def image_callback(self, msg: Image):
        self.image = msg

    def get_image(self):
        return self.image
    
    def get_jpeg(self):
        if self.image:
            cv2_img = self.bridge.imgmsg_to_cv2(self.image, "bgr8")
            return bytes(cv.imencode('.jpg', cv2_img)[1])
        else:
            return bytes("")
            

def ros2_thread(node):
    print('entering ros2 thread')
    rclpy.spin(node)
    print('leaving ros2 thread')


def sigint_handler(signal, frame):
    """
    SIGINT handler

    We have to know when to tell rclpy to shut down, because
    it's in a child thread which would stall the main thread
    shutdown sequence. So we use this handler to call
    rclpy.shutdown() and then call the previously-installed
    SIGINT handler for Flask
    """
    rclpy.shutdown()
    if prev_sigint_handler is not None:
        prev_sigint_handler(signal)


rclpy.init(args=None)
ros2_node = JunoApiNode()

app = Flask(__name__)
CORS(app)
cors = CORS(app, resource={
    r"/*": {
        "origins": "*"
    }
})
threading.Thread(target=ros2_thread, args=[ros2_node]).start()
prev_sigint_handler = signal.signal(signal.SIGINT, sigint_handler)


def _get_stream(input: str = "input1"):
    while True:
        # ret, buffer = cv2.imencode('.jpg', frame)
        try:
            yield (
                    b'--frame\r\n'
                    b'Content-Type: image/jpeg\r\n\r\n' + ros2_node.get_jpeg() + b'\r\n'
            )  # concat frame one by one and show result
        except Exception as ex:
            pass
    
@app.route('/api/stream')
def stream():
    return Response(_get_stream(), mimetype='multipart/x-mixed-replace; boundary=frame')

@app.route('/api/stream/<input>')
def stream_input(input: str):
    return Response(_get_stream(input), mimetype='multipart/x-mixed-replace; boundary=frame')


@app.route('/api/drive/<direction>/<speed>')
def drive_cmd(direction: str, speed: str):
    ros2_node.drive(direction, float(speed))
    return {'drive': direction, 'speed': float(speed)}

