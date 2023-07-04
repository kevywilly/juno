#!/bin/bash
cd /home/nano/jetson-containers && ./scripts/docker_run.sh -v /home/nano/ros_data:/ros_data -c dustynv/ros:humble-pytorch-l4t-r32.7.1