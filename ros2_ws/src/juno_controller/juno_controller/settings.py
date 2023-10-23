from pydantic import BaseSettings, BaseModel
from typing import List, Optional, Any

from juno_controller.training_config import (TrainingConfig, Obstacle3dConfig)

class AppSettings(BaseSettings):

    # Drivetrain Settings

    reverse_motors: bool = True

    m1_alpha: float = 1.0
    m2_alpha: float = 1.0
    m3_alpha: float = 1.0
    m4_alpha: float = 1.0

    robot_drive_speed: float = 0.50
    robot_turn_speed: float = 0.50

    # Training Settings

    training_config: TrainingConfig = Obstacle3dConfig 
    retrain_model: bool = True
    default_epochs: int = 30

    # Input Settings

    cam_width: int = 1280
    cam_height: int = 720
    cam_fps: float = 30
    cam_capture_width: int = 1280
    cam_capture_height:int = 720
    cam_stereo: bool = False

    # Detectnet Settings
    
    use_detectnet: bool = False 
    detectnet_overlay: str = "box,labels,conf"
    detect_net_model: str = "ssd-mobilenet-v2"
    detect_net_threshold: float = 0.5

settings = AppSettings()
