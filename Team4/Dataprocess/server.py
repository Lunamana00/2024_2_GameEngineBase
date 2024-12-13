from flask import Flask, request, jsonify
import os
import logging
from predict import predict_image

# Flask 앱 초기화
app = Flask(__name__)

# 업로드 폴더 설정
UPLOAD_FOLDER = "./uploads"
os.makedirs(UPLOAD_FOLDER, exist_ok=True)

# 로깅 설정
logging.basicConfig(
    level=logging.DEBUG,
    format='%(asctime)s [%(levelname)s] %(message)s',
    handlers=[
        logging.FileHandler("server.log"),  # 로그를 파일에 저장
        logging.StreamHandler()            # 콘솔에 출력
    ]
)

@app.route('/predict', methods=['POST'])
def predict():
    logging.debug("Received request: %s", request.json)
    
    # JSON 데이터 확인
    data = request.get_json()
    if not data or 'file_path' not in data:
        message = 'File path not provided'
        logging.error(message)
        return jsonify({'status': 'error', 'message': message}), 400

    file_path = data['file_path'] + "SavedDrawing.png"
    logging.info(f"File path received: {file_path}")

    if not os.path.exists(file_path):
        message = f"File not found at {file_path}"
        logging.error(message)
        return jsonify({'status': 'error', 'message': message}), 400

    try:
        # 예측 수행
        logging.info("Starting prediction...")
        prediction = predict_image(file_path)
        logging.info(f"Prediction result: {prediction}")
        return jsonify({'status': 'success', 'prediction': prediction})
    except Exception as e:
        logging.exception("Error during prediction")
        return jsonify({'status': 'error', 'message': str(e)}), 500

if __name__ == '__main__':
    app.run(host='127.0.0.1', port=8000, debug=True)  # 디버그 모드 활성화
