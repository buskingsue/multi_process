// sudo chmod 777 /dev/ttyACM0
// ls -al /dev/ttyACM0
const int led1 = 2; // 1초마다 깜빡이는 LED
const int led2 = 3; // 0.5초마다 깜빡이는 LED
const int led3 = 4; // 0.2초마다 깜빡이는 LED

unsigned long previousMillis1 = 0;
unsigned long previousMillis2 = 0;
unsigned long previousMillis3 = 0;

const int interval1 = 1000; // 1초
const int interval2 = 500;  // 0.5초
const int interval3 = 200;  // 0.2초

bool ledState1 = LOW;
bool ledState2 = LOW;
bool ledState3 = LOW;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  // LED1 (1초마다 깜빡임)
  if (currentMillis - previousMillis1 >= interval1) {
    previousMillis1 = currentMillis;
    ledState1 = !ledState1;
    digitalWrite(led1, ledState1);
  }

  // LED2 (0.5초마다 깜빡임)
  if (currentMillis - previousMillis2 >= interval2) {
    previousMillis2 = currentMillis;
    ledState2 = !ledState2;
    digitalWrite(led2, ledState2);
  }

  // LED3 (0.2초마다 깜빡임)
  if (currentMillis - previousMillis3 >= interval3) {
    previousMillis3 = currentMillis;
    ledState3 = !ledState3;
    digitalWrite(led3, ledState3);
  }
}
