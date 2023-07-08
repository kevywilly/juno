import atexit
import traitlets
from Adafruit_MotorHAT import Adafruit_MotorHAT

class Motor:

    def __init__(self, driver, channel, alpha = 1.0, beta = 0.0, reversed = False):
        self._channel = channel
        self._value = 0
        self._alpha = alpha
        self._beta = beta
        self._driver = driver
        self._motor = self._driver.getMotor(self._channel)
        self._reversed = reversed

        atexit.register(self._release)


    def set_value(self, value):
        mapped_value = int(255.0 * (self._alpha * value + self._beta))
        self._speed = min(max(abs(mapped_value), 0), 255)
        self._motor.setSpeed(self._speed)
        if self._reversed:
            mapped_value = -mapped_value
        if mapped_value < 0:
            self._motor.run(Adafruit_MotorHAT.FORWARD)
        else:
            self._motor.run(Adafruit_MotorHAT.BACKWARD)

    def _release(self):
        """Stops motor by releasing control"""
        self._motor.run(Adafruit_MotorHAT.RELEASE)


"""
from Adafruit_MotorHAT import Adafruit_MotorHAT
driver = Adafruit_MotorHAT(addr=0x60, i2c_bus=1)
m = driver.getMotor(2)
m.setSpeed(150)
m.run(Adafruit_MotorHAT.FORWARD)
m.run(Adafruit_MotorHAT.RELEASE)

"""
