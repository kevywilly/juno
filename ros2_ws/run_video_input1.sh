#!/bin/bash

source /ros_deep_learning/install/setup.bash 

#ros2 launch ros_deep_learning video_viewer.ros2.launch input:=csi://0 --flip-input="rotate-180"

ros2 run ros_deep_learning video_source --ros-args -p resource:=csi://0 -p flip:=rotate-180