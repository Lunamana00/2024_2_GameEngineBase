from tensorflow.keras.models import load_model
from tensorflow.keras.utils import load_img, img_to_array
import numpy as np
import pickle

def predict_image(img_path):
    # 모델 로드
    model = load_model('mobilenet_classification_model.h5')

    # 클래스 인덱스 로드
    with open('class_indices.pkl', 'rb') as f:
        class_indices = pickle.load(f)

    # 이미지 로드 및 전처리
    img = load_img(img_path, target_size=(224, 224))  # 이미지 로드
    x = img_to_array(img)  # 배열로 변환
    x = np.expand_dims(x, axis=0)  # 배치 차원 추가
    x /= 255.0  # 정규화

    # 예측
    predictions = model.predict(x)
    class_labels = list(class_indices.keys())
    predicted_class = class_labels[np.argmax(predictions)]
    return predicted_class
if __name__ == "__main__":
    # 테스트 이미지 경로
    img_path = 'C:\\Users\\kth00\\Documents\\GitHub\\2024_2_GameEngineBase\\Dataprocess\\dataset\\final\\CF2.png'
    result = predict_image(img_path)
    print(f'Predicted class: {result}')
