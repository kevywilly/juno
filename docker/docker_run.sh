#!/usr/bin/env bash

CONTAINER_IMAGE=""
CONTAINER_NAME=""
ENVIRONMENT=""
USER_VOLUME=""
USER_COMMAND=""


show_help() {
    echo " "
    echo "usage: Starts the Docker container and runs a user-specified command"
    echo " "
    echo "   ./scripts/docker_run.sh --container DOCKER_IMAGE"
    echo "                           --volume HOST_DIR:MOUNT_DIR"
    echo "                           --run RUN_COMMAND"
    echo " "
    echo "args:"
    echo " "
    echo "   --help                       Show this help text and quit"
    echo " "
    echo "   -c, --container DOCKER_IMAGE Specifies the Docker container image to use"
    echo "                                (e.g. nvcr.io/nvidia/l4t-ml:32.7.1-py3)"
    echo " "
    echo "   -e, --env VARIABLE=VALUE Set an environment variable in the container"
    echo " "
    echo "   -v, --volume HOST_DIR:MOUNT_DIR Mount a path from the host system into"
    echo "                                   the container.  Should be specified as:"
    echo " "
    echo "                                      -v /my/host/path:/my/container/path"
    echo " "
    echo "                                   These should be absolute paths, and you"
    echo "                                   can specify multiple --volume options."
    echo " "
    echo "   -r, --run RUN_COMMAND  Command to run once the container is started."
    echo "                          Note that this argument must be invoked last,"
    echo "                          as all further arguments will form the command."
    echo "                          If no run command is specified, an interactive"
    echo "                          terminal into the container will be provided."
    echo "" -r, --name CONTAINER_NAME
    echo " "
}

die() {
    printf '%s\n' "$1"
    show_help
    exit 1
}

# parse arguments
while :; do
    case $1 in
        -h|-\?|--help)
            show_help    # Display a usage synopsis.
            exit
            ;;
        -c|--container)       # Takes an option argument; ensure it has been specified.
            if [ "$2" ]; then
                CONTAINER_IMAGE=$2
                shift
            else
                die 'ERROR: "--container" requires a non-empty option argument.'
            fi
            ;;
        --container=?*)
            CONTAINER_IMAGE=${1#*=} # Delete everything up to "=" and assign the remainder.
            ;;
        --container=)         # Handle the case of an empty --image=
            die 'ERROR: "--container" requires a non-empty option argument.'
            ;;
	   -e|--env)
            if [ "$2" ]; then
                ENVIRONMENT="$ENVIRONMENT --env $2 "
                shift
            else
                die 'ERROR: "--env" requires a non-empty option argument.'
            fi
            ;;
        --env=?*)
            ENVIRONMENT="$ENVIRONMENT --env ${1#*=} "
            ;;
        --env=)
            die 'ERROR: "--env" requires a non-empty option argument.'
            ;;
        -v|--volume)
            if [ "$2" ]; then
                USER_VOLUME="$USER_VOLUME --volume $2 "
                shift
            else
                die 'ERROR: "--volume" requires a non-empty option argument.'
            fi
            ;;
        --volume=?*)
            USER_VOLUME="$USER_VOLUME --volume ${1#*=} "
            ;;
        --volume=)
            die 'ERROR: "--volume" requires a non-empty option argument.'
            ;;
        -r|--run)
            if [ "$2" ]; then
                shift
                USER_COMMAND=" $@ "
            else
                die 'ERROR: "--run" requires a non-empty option argument.'
            fi
            ;;
        -n|--name)
            if [ "$2" ]; then
                CONTAINER_NAME="$CONTAINER_NAME --name $2 "
                shift
            else
                die 'ERROR: "--name" requires a non-empty option argument.'
            fi
            ;;
        --name=?*)
            CONTAINER_NAME="$CONTAINER_NAME --name ${1#*=} "
            ;;
        --)              # End of all options.
            shift
            break
            ;;
        -?*)
            printf 'WARN: Unknown option (ignored): %s\n' "$1" >&2
            ;;
        *)               # Default case: No more options, so break out of the loop.
            break
    esac

    shift
done

# check for container image
if [ -z "$CONTAINER_IMAGE" ]; then
	die 'ERROR:  the container image to run must be set with the --container or -c options'
fi

# check for V4L2 devices
V4L2_DEVICES=""
I2C_DEVICES=" "
TTY_DEVICES=" "

for i in {0..9}
do
	if [ -a "/dev/video$i" ]; then
		V4L2_DEVICES="$V4L2_DEVICES --device /dev/video$i "
	fi

    if [ -a "/dev/i2c-$i" ]; then
		I2C_DEVICES="$I2C_DEVICES --device /dev/i2c-$i "
	fi

    if [ -a "/dev/ttyUSB$i" ]; then
		TTY_DEVICES="$TTY_DEVICES --device /dev/ttyUSB$i "
	fi
done

# check for display
DISPLAY_DEVICE=""

if [ -n "$DISPLAY" ]; then
	# give docker root user X11 permissions
	sudo xhost +si:localuser:root
	
	# enable SSH X11 forwarding inside container (https://stackoverflow.com/q/48235040)
	XAUTH=/tmp/.docker.xauth
	xauth nlist $DISPLAY | sed -e 's/^..../ffff/' | xauth -f $XAUTH nmerge -
	chmod 777 $XAUTH

	DISPLAY_DEVICE="-e DISPLAY=$DISPLAY -v /tmp/.X11-unix/:/tmp/.X11-unix -v $XAUTH:$XAUTH -e XAUTHORITY=$XAUTH"
fi

# print configuration
print_var() 
{
	if [ -n "${!1}" ]; then                                                # reference var by name - https://stackoverflow.com/a/47768983
		local trimmed="$(echo -e "${!1}" | sed -e 's/^[[:space:]]*//')"   # remove leading whitespace - https://stackoverflow.com/a/3232433    
		printf '%-17s %s\n' "$1:" "$trimmed"                              # justify prefix - https://unix.stackexchange.com/a/354094
	fi
}

print_var "CONTAINER_IMAGE"
print_var "CONTAINER_NAME"
print_var "ENVIRONMENT"
print_var "USER_VOLUME"
print_var "USER_COMMAND"
print_var "V4L2_DEVICES"
print_var "DISPLAY_DEVICE"
print_var "I2C_DEVICES"
print_var "TTY_DEVICES"
print_var "VOLUMES"

# run the container
cat /proc/device-tree/model > /tmp/nv_jetson_model

sudo /usr/bin/docker run --runtime nvidia -it --rm --network host \
    -v /tmp/argus_socket:/tmp/argus_socket \
    -v /etc/enctune.conf:/etc/enctune.conf \
    -v /etc/nv_tegra_release:/etc/nv_tegra_release \
    -v /tmp/nv_jetson_model:/tmp/nv_jetson_model \
	$ENVIRONMENT $DISPLAY_DEVICE $V4L2_DEVICES $I2C_DEVICES $TTY_DEVICES\
	$USER_VOLUME $CONTAINER_NAME $CONTAINER_IMAGE $USER_COMMAND
