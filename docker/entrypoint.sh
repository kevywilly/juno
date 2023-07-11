#!/bin/bash
/etc/init.d/nginx start \
&& cd /juno/ros2_ws/launch \
&& . /ros_deep_learning/install/setup.sh \
&& . /juno/ros2_ws/install/setup.sh \
&& AMENT_PREFIX_PATH="$AMENT_PREFIX_PATH:/ros_deep_learning/install/ros_deep_learning" ros2 launch juno.launch


