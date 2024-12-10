# preprocessing.py
import tensorflow as tf
from tensorflow.keras.preprocessing.image import ImageDataGenerator
import pickle

def preprocess_data():
    # 데이터 증강 및 전처리
    train_datagen = ImageDataGenerator(
        rescale=1.0/255,
        rotation_range=20,
        width_shift_range=0.2,
        height_shift_range=0.2,
        zoom_range=0.2,
        horizontal_flip=True
    )

    validation_datagen = ImageDataGenerator(rescale=1.0/255)

    # 데이터 로드
    train_generator = train_datagen.flow_from_directory(
        'dataset/train',
        target_size=(224, 224),
        batch_size=32,
        class_mode='categorical'
    )

    validation_generator = validation_datagen.flow_from_directory(
        'dataset/validation',
        target_size=(224, 224),
        batch_size=32,
        class_mode='categorical'
    )

    # 클래스 레이블 저장
    with open('class_indices.pkl', 'wb') as f:
        pickle.dump(train_generator.class_indices, f)

    return train_generator, validation_generator

if __name__ == "__main__":
    preprocess_data()
