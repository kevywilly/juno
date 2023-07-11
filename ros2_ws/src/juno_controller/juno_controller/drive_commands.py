from geometry_msgs.msg import Twist

def apply_drive_cmd(cmd: str, speed: float) -> Twist:
    d = cmd.upper()
    msg = Twist()
    
    if d == "FORWARD":
        msg.linear.x = speed
    elif d == "BACKWARD":
        msg.linear.x = -speed
    elif d == "RIGHT":
        msg.angular.z = speed
    elif d == "LEFT":
        msg.angular.z = -speed
    elif d == "SLIDE_LEFT" or d == "SLEFT":
        msg.linear.y = -speed
    elif d == "SLIDE_RIGHT" or d == "SRIGHT":
        msg.linear.y = speed

    return msg