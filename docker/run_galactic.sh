#!/usr/bin/env bash
./docker_run.sh  -c dustynv/ros:galactic-pytorch-l4t-r32.7.1 -v /home/nano/juno:/juno -n juno.service -r /bin/bash
