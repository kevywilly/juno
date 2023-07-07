#!/usr/bin/env bash
sudo docker build --network=host -t kevywilly/juno:1.0 --build-arg CACHEBUST=$(date +%s) -f Dockerfile .
