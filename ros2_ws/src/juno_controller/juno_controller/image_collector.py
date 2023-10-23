import os
from pathlib import Path
from uuid import uuid1
import time
import cv2
from juno_controller.settings import settings
from juno_controller.training_config import TrainingConfig

class ImageCollector:
    def __init__(self):
        self.counts = {}
        self.config: TrainingConfig = settings.training_config
        self._make_folders()
        self._generate_counts()

    def category_path(self, category: str) -> str:
        return os.path.join(self.config.get_dataset_path(), category.replace(" ", "_"))

    def get_count(self, category: str) -> int:
        value = len(os.listdir(self.category_path(category)))
        self.counts[category] = value
        return value

    def _generate_counts(self):
        for category in self.config.categories:
            self.get_count(category)

    def _make_folders(self):
        for category in self.config.categories:
            try:
                os.makedirs(self.category_path(category))
            except FileExistsError:
                pass
            except Exception as ex:
                print(ex)
                raise ex
                
    def get_categories(self):
        return [{"name": k, "count": v} for k,v in self.counts.items()]

    def collect(self, category: str, image) -> int:
        print(f"collecting image for {category}")
        
        if category in self.config.categories:
            name = str(int(time.time())) + ".jpg"
            
            pth = os.path.join(
                self.category_path(category),
                name
            )
            
            with open(pth, 'wb') as f:
                print(f"writing to {pth}")
                try:
                    f.write(image)
                except Exception as ex:
                    print(ex)

            return self.get_count(category)

        return -1

    def get_images(self, category):
        paths = sorted(Path(self.category_path(category)).iterdir(), key=os.path.getctime)
        return [p.name for p in paths]

    def load_image(self, category, name):
        im = cv2.imread(os.path.join(self.category_path(category), name), cv2.IMREAD_ANYCOLOR)
        _, im_bytes_np = cv2.imencode('.jpeg', im)

        return im_bytes_np.tobytes()

    def delete_image(self, category, name):
        try:
            os.remove(os.path.join(self.category_path(category), name))
            self._generate_counts()
        except:
            pass

        return True