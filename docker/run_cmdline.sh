#!/usr/bin/env bash
cd /home/nano/juno/docker && ./docker_run.sh  -c kevywilly/juno:1.0 -v /home/nano/juno:/juno -n juno.service -r /bin/bash
