# https://docs.ros.org/en/dashing/Tutorials/Launch-Files/Creating-Launch-Files.html#ros2launch

from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='juno_controller',
            executable='drivetrain',
            name='drivetrain'
        ),
        Node(
            package='juno_controller',
            executable='drivetrain',
            name='drivetrain'
        ),
        Node(
            package='juno_controller',
            executable='api',
            name='api'
        ),
    ])