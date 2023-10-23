# Juno Bot

## Useful Links

https://navigation.ros.org/setup_guides/transformation/setup_transforms.html

## Headless Setup

https://github.com/overclock98/Jetson_Nano_true_Headless_setup_without_hdmi_display/blob/main/README.md


## Jetson Inference

```
sudo apt-get update
sudo apt-get install git cmake libpython3-dev python3-numpy
git clone --recursive --depth=1 https://github.com/dusty-nv/jetson-inference

cd jetson-inference
mkdir build
cd build
# must disable NVMM
cmake -DENABLE_NVMM=off ../
make -j$(nproc)
sudo make install

pip3 install setuptools
sudo -H ./install_pytorch.sh

```


## Fan Control

```
sudo apt install python3-dev

cd ~
git clone https://github.com/Pyrestone/jetson-fan-ctl.git
cd jetson-fan-ctl
sudo ./install.sh


```


## Juno Docker
```
# Clone Repo

cd ~
git clone --recursive --depth=1 git@github.com:kevywilly/juno.git

# Build Docker Image

cd juno/docker
./build.sh

# Run dockder image and build 
./run_cmdline.sh

cd /juno/ros2_ws
colcon build --symlink-install

# run app
/entrypoint.sh

```

## ROS

https://docs.ros.org/en/eloquent/Installation/Linux-Install-Debians.html#resources

#  COLCON

sudo apt install python3-colcon-common-extensions

# ROS_DEEP_LEARNING

```
sudo apt-get install ros-eloquent-vision-msgs \
                       ros-eloquent-launch-xml \
                       ros-eloquent-launch-yaml \
                       python3-colcon-common-extensions
```

## lidar

```
sudo adduser nano dialout
```

## JUNO

```
pip3 install --no-cache-dir --verbose Adafruit_MotorHAT Adafruit_SSD1306 flask flask_cors pydantic pydantic-settings setuptools==58.2.0

```