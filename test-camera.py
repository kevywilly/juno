#!/usr/bin/python3

import atexit
from jetson_utils import videoSource, cudaMemcpy, cudaToNumpy

input = videoSource("csi://0", argv=['--input-flip=rotate-180'])

def cleanup():
     input.release()

while True:
     img = input.Capture()

     if not img:
        print("timeout")
     else:
        cv_image = cudaToNumpy(img)
        h,w = cv_image.shape[:-1]
        print(f"{w},{h}")
        print("got image")


    
