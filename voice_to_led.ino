//pkill -f arduino 아두이노 프로세스 종료
#include <SoftwareSerial.h>  // 소프트웨어 시리얼 라이브러리 포함

#define LED1_PIN 13  // 13번 핀 LED
#define LED2_PIN 3   // 3번 핀 LED
#define LED3_PIN 4   // 4번 핀 LED
#define RX 10        // 블루투스 모듈 RX (아두이노 TX와 연결)
#define TX 11        // 블루투스 모듈 TX (아두이노 RX와 연결)

SoftwareSerial BTSerial(RX, TX);  // 블루투스 시리얼 통신 객체 생성

void setup() {
    pinMode(LED1_PIN, OUTPUT);  // 13번 핀 LED 출력 설정
    pinMode(LED2_PIN, OUTPUT);  // 3번 핀 LED 출력 설정
    pinMode(LED3_PIN, OUTPUT);  // 4번 핀 LED 출력 설정

    BTSerial.begin(9600);  // 블루투스 통신 시작 (9600bps)
    Serial.begin(9600);    // 시리얼 모니터 시작
}

void loop() {
    if (BTSerial.available()) {  // 블루투스 모듈로부터 데이터 수신 확인
        String command = BTSerial.readStringUntil('\n');  // 한 줄 읽기
        command.trim();  // 공백 및 개행 문자 제거

        Serial.println("받은 명령: " + command);  // 시리얼 모니터 출력

        // 13번 핀 LED 제어
        if (command == "1번 불 켜 줘" || command == "LED ON") {
            digitalWrite(LED1_PIN, HIGH);
            BTSerial.println("LED1 ON");
        } 
        else if (command == "1번 불 꺼 줘" || command == "LED OFF") {
            digitalWrite(LED1_PIN, LOW);
            BTSerial.println("LED1 OFF");
        }

        // 3번 핀 LED 제어
        else if (command == "2번 불 켜 줘" || command == "LED2 ON") {
            digitalWrite(LED2_PIN, HIGH);
            BTSerial.println("LED2 ON");
        } 
        else if (command == "2번 불 꺼 줘" || command == "LED2 OFF") {
            digitalWrite(LED2_PIN, LOW);
            BTSerial.println("LED2 OFF");
        }

        // 4번 핀 LED 제어
        else if (command == "3번 불 켜 줘" || command == "LED3 ON") {
            digitalWrite(LED3_PIN, HIGH);
            BTSerial.println("LED3 ON");
        } 
        else if (command == "3번 불 꺼 줘" || command == "LED3 OFF") {
            digitalWrite(LED3_PIN, LOW);
            BTSerial.println("LED3 OFF");
        }

        // **전체 LED 켜기**
        else if (command == "전체 불 켜 줘" || command == "ALL ON") {
            digitalWrite(LED1_PIN, HIGH);
            digitalWrite(LED2_PIN, HIGH);
            digitalWrite(LED3_PIN, HIGH);
            BTSerial.println("ALL LED ON");
        }

        // **전체 LED 끄기**
        else if (command == "전체 불 꺼 줘" || command == "ALL OFF") {
            digitalWrite(LED1_PIN, LOW);
            digitalWrite(LED2_PIN, LOW);
            digitalWrite(LED3_PIN, LOW);
            BTSerial.println("ALL LED OFF");
        }
    }
}
