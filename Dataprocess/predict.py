# predict.py
import tensorflow as tf
import numpy as np
import pickle
from tensorflow.keras.utils import load_img, img_to_array
import tensorflow as tf
import numpy as np
import pickle
from tensorflow.keras.utils import load_img, img_to_array
import time  # 시간 측정 모듈

def predict_image(img_path):
    # TensorFlow Lite 모델 로드
    interpreter = tf.lite.Interpreter(model_path='mobilenet_classification_model.tflite')
    interpreter.allocate_tensors()

    # 입력 및 출력 텐서 정보 가져오기
    input_details = interpreter.get_input_details()
    output_details = interpreter.get_output_details()

    # 클래스 인덱스 로드
    with open('class_indices.pkl', 'rb') as f:
        class_indices = pickle.load(f)

    # 이미지 전처리
    img = load_img(img_path, target_size=(224, 224))
    x = img_to_array(img)
    x = np.expand_dims(x, axis=0)
    x = x / 255.0  # 정규화

    # 입력 데이터 설정
    interpreter.set_tensor(input_details[0]['index'], x.astype(np.float32))

    # 추론 실행
    interpreter.invoke()

    # 결과 가져오기
    predictions = interpreter.get_tensor(output_details[0]['index'])
    class_labels = list(class_indices.keys())
    predicted_class = class_labels[np.argmax(predictions)]

    return predicted_class

if __name__ == "__main__":
    # 시작 시간 기록
    start_time = time.time()

    # 테스트 이미지 경로
    img_path = 'C:\\Users\\kth00\\Documents\\GitHub\\2024_2_GameEngineBase\\Dataprocess\\dataset\\final\\CF2.png'
    result = predict_image(img_path)

    # 종료 시간 기록
    end_time = time.time()

    print(f'Predicted class: {result}')
    print(f'Total execution time: {end_time - start_time:.4f} seconds')

def predict_image(img_path):
    # TensorFlow Lite 모델 로드
    interpreter = tf.lite.Interpreter(model_path='mobilenet_classification_model.tflite')
    interpreter.allocate_tensors()

    # 입력 및 출력 텐서 정보 가져오기
    input_details = interpreter.get_input_details()
    output_details = interpreter.get_output_details()

    # 클래스 인덱스 로드
    with open('class_indices.pkl', 'rb') as f:
        class_indices = pickle.load(f)

    # 이미지 전처리
    img = load_img(img_path, target_size=(224, 224))
    x = img_to_array(img)
    x = np.expand_dims(x, axis=0)
    x = x / 255.0  # 정규화

    # 입력 데이터 설정
    interpreter.set_tensor(input_details[0]['index'], x.astype(np.float32))

    # 추론 실행
    interpreter.invoke()

    # 결과 가져오기
    predictions = interpreter.get_tensor(output_details[0]['index'])
    class_labels = list(class_indices.keys())
    predicted_class = class_labels[np.argmax(predictions)]

    return predicted_class

if __name__ == "__main__":
    # 테스트 이미지 경로
    img_path = 'C:\\Users\\kth00\\Documents\\GitHub\\2024_2_GameEngineBase\\Dataprocess\\dataset\\final\\KF4.png'
    result = predict_image(img_path)
    print(f'Predicted class: {result}')
