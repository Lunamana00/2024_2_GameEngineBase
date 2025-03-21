import tensorflow as tf
import numpy as np
import pickle
from tensorflow.keras.utils import load_img, img_to_array
import sys
import os

BASE_DIR = os.path.dirname(os.path.abspath(__file__))
MODEL_PATH = os.path.join(BASE_DIR, 'mobilenet_classification_model.tflite')
CLASS_INDICES_PATH = os.path.join(BASE_DIR, 'class_indices.pkl')

def predict_image(img_path):
    try:
        # TensorFlow Lite 모델 로드
        interpreter = tf.lite.Interpreter(model_path=MODEL_PATH)
        interpreter.allocate_tensors()

        # 클래스 인덱스 로드
        with open(CLASS_INDICES_PATH, 'rb') as f:
            class_indices = pickle.load(f)

        # 이미지 전처리 및 추론
        img = load_img(img_path, target_size=(224, 224))
        x = img_to_array(img)
        x = np.expand_dims(x, axis=0)
        x = x / 255.0

        interpreter.set_tensor(interpreter.get_input_details()[0]['index'], x.astype(np.float32))
        interpreter.invoke()

        predictions = interpreter.get_tensor(interpreter.get_output_details()[0]['index'])
        class_labels = list(class_indices.keys())
        return class_labels[np.argmax(predictions)]

    except Exception as e:
        raise RuntimeError(f"Prediction failed: {e}")

if __name__ == "__main__":
    try:
        img_path = sys.argv[1]
        result = predict_image(img_path)
        print(result)
    except Exception as e:
        print(f"Error: {e}", file=sys.stderr)
        sys.exit(1)
