멀티스레딩과 멀티프로세싱은 둘 다 여러 작업을 동시에 처리하는 것처럼 보이게 하는 기술이지만, 작동 방식과 자원 공유 방식에서 중요한 차이가 있습니다.

**간단히 말해:**

* **멀티프로세싱 (Multi-processing):** 여러 개의 **독립적인 프로그램 (프로세스)**을 동시에 실행하는 것입니다. 각 프로세스는 자신만의 메모리 공간을 가집니다. 🧱
* **멀티스레딩 (Multi-threading):** 하나의 **프로그램 내에서 여러 개의 작업 흐름 (스레드)**을 동시에 실행하는 것입니다. 스레드들은 해당 프로세스의 메모리 공간을 공유합니다. 🔗

---

## 주요 차이점

| 특징          | 멀티프로세싱 (Multi-processing)                                  | 멀티스레딩 (Multi-threading)                                       |
| :------------ | :--------------------------------------------------------------- | :----------------------------------------------------------------- |
| **메모리 공유** | 각 프로세스는 **독립적인 메모리 공간**을 가짐 (공유 안 함)            | 스레드들은 **프로세스의 메모리 공간을 공유** (데이터 공유 용이)          |
| **자원 생성** | 새로운 프로세스를 만드는 것은 **자원 소모가 큼** (시간과 메모리)      | 새로운 스레드를 만드는 것은 프로세스보다 **자원 소모가 적음** |
| **문맥 교환** | 문맥 교환(Context Switching) 시 **오버헤드가 큼** | 문맥 교환 시 **오버헤드가 상대적으로 적음** |
| **안정성** | 한 프로세스의 오류가 다른 프로세스에 **영향을 주지 않음** (독립적) | 한 스레드의 오류가 **전체 프로세스에 영향**을 줄 수 있음 (공유 자원 문제) |
| **통신** | 프로세스 간 통신 (IPC)은 **복잡**하고 느림 (ex: 파이프, 소켓)      | 스레드 간 통신은 **간단**하고 빠름 (공유 메모리 사용)                 |
| **활용 예시** | 여러 개의 독립적인 애플리케이션 실행, CPU 집약적인 작업 병렬 처리 | 단일 애플리케이션 내의 여러 작업 동시 처리 (ex: 웹 서버, UI 응답성 유지) |

---

### 🧑‍💻 언제 무엇을 사용할까?

* **멀티프로세싱:**
    * 각각 독립적으로 실행되어야 하는 여러 작업을 처리할 때
    * 높은 안정성이 요구될 때 (하나의 작업 실패가 다른 작업에 영향을 주지 않아야 할 때)
    * CPU 연산이 많은 작업을 병렬로 처리하여 성능을 높이고자 할 때 (각 프로세스가 다른 CPU 코어에서 실행 가능)
* **멀티스레딩:**
    * 하나의 프로그램 내에서 여러 작업을 동시에 처리하여 응답성을 높이거나 효율성을 증대시키고자 할 때
    * 작업 간 데이터 공유가 빈번하게 필요할 때
    * 자원 생성 및 문맥 교환 오버헤드를 줄이고 싶을 때

**결론적으로,** 멀티프로세싱은 각기 다른 일을 하는 여러 명의 일꾼을 고용하는 것과 같고, 멀티스레딩은 한 명의 일꾼이 여러 가지 일을 동시에 처리하는 것과 비슷하다고 생각할 수 있습니다. 어떤 방식을 선택할지는 수행하려는 작업의 특성과 시스템 환경에 따라 달라집니다.
# multi_processing 다중처리
## multiprocess.ipynb 파일
##
## 
## multithread.ipynb 파일
## 패키지 설치 !pip install pytubefix
##
## 홀수 짝수 판별기
## odd_even.c
##
## aduino 파일 led_aduino.ino, voice_to_led.ino 음성 인식 led 제어
## pkill -f arduino 아두이노 프로세스 종료
##
## 휴대폰 앱 Arduino Bluetooth Control
##
# otx.md파일에 otx 명령어 training, export, benchmark 추론 inference
##
# openvino training extensions 오픈비노 학습 확장 
## git clone https://github.com/openvinotoolkit/training_extensions.git
## cd training_extensions
##
# - 가상 환경 설정 - Set up a virtual environment.
## python3 -m venv .otx #가상환경 만들기 
## source .otx/bin/activate #가상환경에 접속하기
## pip install otx[base]
##
### otx find
## <img width = "40%" src= "https://github.com/buskingsue/multi_process/blob/master/otx5.png"> 

## <img width = "40%" src= "https://github.com/buskingsue/multi_process/blob/master/otx1.png"> 
## <img width = "40%" src= "https://github.com/buskingsue/multi_process/blob/master/otx3.png"> 
# sudo find / -type d -name ".otx"
## 가상환경 폴더 .otx


