<h1 align="center">
  <br>
  <img src="https://github.com/user-attachments/assets/7481a3d6-9780-450c-8971-2f59b630153a" alt="SLS" width="300">
  <br>
  스마트 인체감지 선풍기
  <br>
</h1>
  <h3>이 저장소는 Arduino Uno(R3)를 사용하여 개발한 프로젝트입니다.</h3><br>


## 📌 목차
1. [🖥️ 프로젝트 개요](#%EF%B8%8F-프로젝트-개요)
2. [🔨 사용기술](#-사용기술)
3. [🎨 프로토타입](#-프로토타입)
4. [🔧 단위테스트](#-단위테스트)
5. [🛠️ 통합테스트](#%EF%B8%8F-통합테스트)
6. [📽️ 시연영상](#%EF%B8%8F-시연영상)
7. [🗃️ 발표자료](#%EF%B8%8F-발표자료)

<br>

## 🖥️ 프로젝트 개요
### :calendar: 개발기간
  - 2023.09.01 ~ 2023.12.15(총 3개월)

### 🧑‍🤝‍🧑 인원
  - 1명 (개인 프로젝트 진행)

### 🔖프로젝트 소개

최종 캡스톤 디자인 프로젝트인 ***사회적 약자를 위한 스마트시티 미세먼지 및 에너지 데이터 기반 융복합 서비스*** 소개입니다.
  - 기획 배경: <br>
    - 최근 <b>스마트폰과 모바일 기기의 보급이 급격히 증가함</b>에 따라, <br>사람들의 정보 소비 방식이 변화하고 있음.
    - 특히, <b>도서관 이용률이 현저히 낮아지는 추세</b>를 보이고 있으며, <br>이는 전통적인 도서 대여 방식이 현대인의 라이프스타일에 적합하지 않다는 것을 의미함. 
    - <b>쉬운 사용법으로</b> <mark>도서관 이용에 대한 진입장벽을 낮추고</mark> , <br><b>효율적인 관리</b>를 통해 도서관 <mark>운영의 효율성을 높이기 위함</mark>
  - 기획 목적: <br>
    - 도서관 이용에 대한 진입장벽을 낮춤
    - 도서관 이용의 편리함을 극대화
    - 도서관 이용률을 높이고, 독서 문화를 활성화
  - 기대 효과: <br>
    - 사용자는 도서를 쉽게 대출하고 반납하여 편의성이 향상됨
    - 관리자에게는 효율적인 도서 관리와 대여 시스템을 제공하여 시간 과 인력을 절약
    

[📌 목차로 이동](#-목차)
<br><br>

## 🔨 사용기술
|구분|기능|설명|
|:---:|:---:|:---:|
|S/W|데이터 분석 기획|미세먼지 및 에너지 데이터(3개월) 분석|
|S/W|알고리즘 개발|미세먼지 및 에너지 데이터 정보에 관한 알고리즘 개발|
|S/W|어플 제작|앱인벤터로 어플을 직접 기획 & 제작 & 디자인|
|S/W|미세먼지 측정기 시스템 제작|C++ 코딩 및 블루투스 연동|
|H/W|박스 모델 제작|집을 구현하여 창문에 모터 연결|
|H/W|모터 전용 기어 제작|3D 프린터로 제작|

[📌 목차로 이동](#-목차)
<br><br>
## 🎨 프로토타입
###  페이퍼 프로토타입을 진행해 전체적인 GUI 인터페이스를 디자인 함
<details>
  <summary><b>1. 메인 GUI 화면</b> (👈 Click)</summary>
  <br>
  <ul>
    <li>
      페이퍼 프로토타입
    </li>
    <img src="https://github.com/user-attachments/assets/7bb558f4-4bdc-48b5-93ce-a354c95b04e9" alt="페이퍼 프로토타입"><br><br>
    <li>
      결과 화면
    </li>
    <img src="https://github.com/user-attachments/assets/e53e53d1-1444-4c28-8d18-d395ac0942e5" alt="페이퍼 프로토타입"><br>
  </ul>
</details><br>
<details>
  <summary><b>2. 사용자 GUI 화면</b> (👈 Click)</summary>
  <br>
  <ul>
    <li>
      페이퍼 프로토타입
    </li>
    <img src="https://github.com/user-attachments/assets/e8228ec5-8b15-440d-898e-f9d9e96112c3" alt="페이퍼 프로토타입"><br><br>
    <li>
      결과 화면
    </li>
    <img src="https://github.com/user-attachments/assets/cf3b487e-42b1-48f5-9b66-fbc89872d23d" alt="페이퍼 프로토타입"><br>
  </ul>
</details><br>
<details>
  <summary><b>3. 관리자 GUI 화면</b> (👈 Click)</summary>
  <br>
  <ul>
    <li>
      페이퍼 프로토타입
    </li>
    <img src="https://github.com/user-attachments/assets/9387222a-e637-45a2-81fd-f35297fe342d" alt="페이퍼 프로토타입"><br><br>
    <li>
      결과 화면
    </li>
    <img src="https://github.com/user-attachments/assets/b616c9df-7eb6-4cf8-a61e-0d8769f64e7c" alt="페이퍼 프로토타입"><br>
  </ul>
</details><br>

[📌 목차로 이동](#-목차)
<br><br>

## 🔧 단위테스트
<details>
  <summary><b>📑 요구사항 정의서</b> (👈 Click)</summary>
  <br>
    <img src="https://github.com/user-attachments/assets/a1060dda-2a09-4875-b3ea-8341af549748" alt="요구사항 정의서"><br>
</details>
<details>
  <summary><b>📑 개발 일정</b> (👈 Click)</summary>
  <br>
    <img src="https://github.com/user-attachments/assets/4f69fc22-081a-476c-b84b-16bea5ea644c" alt="개발 일정"><br>
</details><br>
[📌 목차로 이동](#-목차)
<br><br>

## 🛠️ 통합테스트
![ERD](https://github.com/user-attachments/assets/aa83547b-a776-491c-8e66-a0f14df3b2dd)<br><br>
[📌 목차로 이동](#-목차)
<br><br>


## 📽️ 시연영상
[[📹 시연영상]](https://www.youtube.com/playlist?list=PLNdYfRO3wDinaMKtuWkmtTtOvFhH2CDyz)<br>

[📌 목차로 이동](#-목차)
<br><br>

## 🗃️ 발표자료
[[📂 발표자료]](https://drive.google.com/file/d/1pfXYrpNl6nnI-E_PgnhFF8bp2JPUD7gy/view?usp=sharing)<br>

[📌 목차로 이동](#-목차)

## ✅ 목차

<br>

## ✅ 프로젝트 소개

>

<p align="center">
  <img width="30%" src="https://github.com/widrns15/arduino_code/assets/85780501/7512977a-406b-4825-ac77-ecc5b67a1f32">
</p>

### 💡 제안 배경
- 현재 대한민국의 미세먼지는 본격적인 산업화로 중금속 대기오염이 늘어나고 있는 추세
- 우리는 일반인이 아닌 사회적 약자로 초점 변경
- 사회적 약자는 일반인들과는 다르게 미세먼지에 대한 데이터와 정보에 취약하다고 판단

<br>

### 💡 주요 기능 (**펌웨어** 시스템)
- #### 미세먼지 농도와 현재 온도 측정
  >- 미세먼지 측정 센서를 실외에 설치
  >- 아두이노와 직접 제작한 어플에 연결하여 측정
- #### **디스플레이**가 실시간으로 변동하는 현재 미세먼지 농도를 표시
  >- 아두이노에 연결되어 있는 디스플레이 & 어플에 표시
  >- 사회적 약자가 확인하기에 용이
- #### 창문 수﹒자동으로 제어
  >- 아두이노에 연결되어 있는 **모터**를 어플로 각도 제어
  >- 사회적 약자가 제어하기에 용이


<br>


## ✅ 기대효과 및 활용분야

### 1. 기대효과
- #### 작품의 기대효과 
  >- 사회적 약자에 대한 복지 수준의 양적 및 질적 향상 
  >- 사회적 약자를 위한 예방 및 조치 향상 
  >- 미세먼지 및 에너지 데이터 융복합 시스템 향상
- #### 참여 멘티의 교육적 기대효과
  >- C++ 언어 심화 학습 가능
  >- 머릿속으로 생각하는 알고리즘을 직접 개발
  >- 펌웨어 활용을 통해 대학과정에서 배운 마이크로프로세서응용 이론을 활용

### 2. 활용분야
- 미세먼지 예방을 위한 복지형 스마트 시티 제공 
- 미세먼지와 에너지 데이터를 한 눈에 볼 수 있음으로 삶이 질적으로 향상 
