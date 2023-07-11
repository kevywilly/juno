#!/bin/bash
echo "sourcing juno..."
. /juno/ros2_ws/install/setup.sh
echo "sourcing ros deep learning..."
. /ros_deep_learning/install/setup.sh 
echo "starting nodes..."
cd /juno/ros2_ws/launch && ros2 launch juno.launch
