from setuptools import find_packages
from setuptools import setup

setup(
    name='juno_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('juno_interfaces', 'juno_interfaces.*')),
)
