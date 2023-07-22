#!/usr/bin/env bash
/bin/cat /proc/device-tree/model > /tmp/nv_jetson_model

/usr/bin/docker run --runtime nvidia  --name juno.service \
--network host \
--rm \
--device /dev/video0 --device /dev/i2c-0  --device /dev/i2c-1  --device /dev/ttyUSB0 \
-v /tmp/argus_socket:/tmp/argus_socket \
-v /etc/enctune.conf:/etc/enctune.conf \
-v /etc/nv_tegra_release:/etc/nv_tegra_release \
-v /tmp/nv_jetson_model:/tmp/nv_jetson_model \
-v /ml_data:/ml_data \
-v /home/nano/juno:/juno \
kevywilly/juno:1.0
