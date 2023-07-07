FROM dustynv/ros:humble-pytorch-l4t-r32.7.1


WORKDIR /


RUN pip3 install --no-cache-dir --verbose Adafruit_MotorHAT Adafruit_SSD1306 flask traitlets
RUN pip3 install --no-cache-dir --verbose flask_cors
RUN pip3 install --no-cache-dir --verbose pydantic
RUN pip3 install --no-cache-dir --verbose setuptools==58.2.0

RUN apt-get update && apt-get install -y --no-install-recommends \
  && apt-get install -y unzip vim nginx \
  && rm -rf /var/lib/apt/lists/*

RUN git clone https://github.com/dusty-nv/jetson-utils.git \
  && cd jetson-utils && mkdir build && cd build \
  && cmake -DENABLE_NVMM=off ../ \
  && make -j${nproc} \
  && make install

COPY ./nginx.conf /etc/nginx/sites-available/default
COPY ./entrypoint.sh /entrypoint.sh

ARG CACHEBUST=1

RUN git clone https://github.com/kevywilly/nano-control 
RUN cp -r nano-control/build /var/www/build
RUN rm -rf nano-control

# RUN chmod +x /nano_ml/api.py


CMD ["/entrypoint.sh"]

