from typing import List
from typing import Optional, Any
import torchvision
from pydantic import BaseModel

DATA_ROOT: str = "/juno/data"
DATASETS_ROOT: str = f"{DATA_ROOT}/datasets"
MODELS_ROOT: str = f"{DATA_ROOT}/models"
BEST_MODELS_ROOT: str = f"{MODELS_ROOT}/best"

class TrainingConfig(BaseModel):
    name: str
    model_name: str
    categories: List[str]
    model: Optional[Any]

    def get_best_model_path(self):
        return f"{BEST_MODELS_ROOT}/{self.name}_model.pth"
    
    def get_models_root(self):
        return MODELS_ROOT

    def get_dataset_path(self):
        return f"{DATASETS_ROOT}/{self.name}"
    
    def num_categories(self):
        return len(self.categories)

    def load_model(self, *args, **kwargs):
        if self.model_name == "alexnet":
            return torchvision.models.alexnet(*args, **kwargs)
        if self.model_name == "resnet18":
            return torchvision.models.resnet18(*args, **kwargs)

Obstacle3dConfig = TrainingConfig(
    name="obstacle3d",
    model_name="alexnet",
    categories=["forward","left","right"]
)

