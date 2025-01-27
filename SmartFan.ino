#include <HUSKYLENS.h>
#include <Servo.h>
#include <SoftwareSerial.h>

#define SERVO_PIN 7   // 서보 핀 번호
#define FAN_PIN_A 10  // 팬 A 핀 번호
#define FAN_PIN_B 11  // 팬 B 핀 번호

HUSKYLENS huskylens;  // HUSKYLENS 객체 선언
// HUSKYLENS에서 사용할 소프트웨어 시리얼 설정 (RX, TX)
SoftwareSerial mySerial(2, 3);  // RX(초록색 선), TX(파란색 선)

Servo myservo;  // 서보 객체 선언
int pos = 90;   // 서보 위치를 저장하는 변수 선언

// HUSKYLENS 결과값을 시리얼에 출력하는 함수
void printResult(HUSKYLENSResult result) {
  if (result.command == COMMAND_RETURN_BLOCK) {
    Serial.println(String() + F("Block:xCenter=") + result.xCenter +
                   F(",yCenter=") + result.yCenter + F(",width=") +
                   result.width + F(",height=") + result.height + F(",ID=") +
                   result.ID);
  } else {
    Serial.println("Object unknown!");
  }
}

// 설정한 각도까지 천천히 서보를 움직여주는 함수(0~180)
void servoMove(int angle) {
  myservo.attach(SERVO_PIN);  // 서보 변수에 서보 핀 번호를 연결
  if (angle > pos) {  // 서보 위치가 증가하는 경우(왼쪽으로 이동)
    for (pos; pos <= angle; pos++) {
      myservo.write(pos);  // 서보를 pos까지 이동
      delay(50);
    }
  } else {  // 서보 위치가 감소하는 경우(오른쪽으로 이동)
    for (pos; pos >= angle; pos--) {
      myservo.write(pos);
      delay(50);
    }
  }
  myservo.detach();  // 서보 변수에 연결된 서보 핀을 끊어줌
}

// 팬 속도를 조절하는 함수(0~255)
void fanMove(int speed) {
  analogWrite(FAN_PIN_A, 0);
  analogWrite(FAN_PIN_B, speed);
  delay(100);
}

void setup() {
  Serial.begin(115200);                 // 시리얼 모니터 출력용
  mySerial.begin(9600);                 // HUSKYLENS 통신용
  while (!huskylens.begin(mySerial)) {  // HUSKYLENS 초기화(성공할 때까지 반복)
    Serial.println(F("Begin failed!"));
    Serial.println(
        F("1.Please recheck the \"Protocol Type\" in HUSKYLENS (General "
          "Settings>>Protocol Type>>Serial 9600)"));
    Serial.println(F("2.Please recheck the connection."));
    delay(100);
  }
}

void loop() {
  // HUSKYLENS에서 응답이 올 때
  if (huskylens.request() && huskylens.available()) {
    HUSKYLENSResult result = huskylens.read();  // HUSKYLENS에서 응답을 읽어옴
    printResult(result);  // HUSKYLENS 결과값을 시리얼에 출력

    fanMove(0);  // 팬 속도를 최대로 조절

    // 중심 좌표를 기준으로 적절한 서보 각도 계산
    // 중심 좌표 : 0 ~ 320(좌 > 우) / 서보 각도 : 0 ~ 180(우 > 좌)
    int angle = map(-result.xCenter, -320, 0, 50, 130);
    Serial.println(angle);
    servoMove(angle);  // 설정한 각도까지 천천히 서보 움직이기

  } else {
    fanMove(255);  // 팬 속도를 0으로 조절(정지)
  }
}