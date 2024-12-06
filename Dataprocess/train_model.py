# train_model.py
from tensorflow.keras.applications import MobileNet
from tensorflow.keras.models import Model
from tensorflow.keras.layers import GlobalAveragePooling2D, Dense
from tensorflow.keras.optimizers import Adam
import tensorflow as tf
import preprocessing  # 데이터 전처리 코드 가져오기

def build_model():
    # MobileNet 모델 정의
    base_model = MobileNet(weights='imagenet', include_top=False, input_shape=(224, 224, 3))

    # 출력층 추가
    x = base_model.output
    x = GlobalAveragePooling2D()(x)
    predictions = Dense(3, activation='softmax')(x)  # 클래스 수에 따라 수정

    model = Model(inputs=base_model.input, outputs=predictions)

    # 사전 학습된 가중치를 고정
    for layer in base_model.layers:
        layer.trainable = False

    # 모델 컴파일
    model.compile(optimizer=Adam(learning_rate=0.001),
                  loss='categorical_crossentropy',
                  metrics=['accuracy'])
    return model

def train_model():
    # 데이터 로드
    train_generator, validation_generator = preprocessing.preprocess_data()

    # 모델 정의
    model = build_model()

    # 모델 학습
    model.fit(
        train_generator,
        epochs=10,
        validation_data=validation_generator
    )

    # 모델 저장
    model.save('mobilenet_classification_model.h5')

    # TensorFlow Lite 모델로 변환
    converter = tf.lite.TFLiteConverter.from_keras_model(model)
    tflite_model = converter.convert()

    # TensorFlow Lite 모델 저장
    with open('mobilenet_classification_model.tflite', 'wb') as f:
        f.write(tflite_model)

    print("TFLite 모델 저장 완료: mobilenet_classification_model.tflite")

if __name__ == "__main__":
    train_model()
