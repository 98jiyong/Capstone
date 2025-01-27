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
3. [🗂️ 설계 및 구조](#-설계-및-구조)
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

>캡스톤 디자인 프로젝트인 ***스마트 인체감지 선풍기*** 소개입니다.

  #### 💡 기획 배경
- 지구온난화로 인해 여름철 평균 온도가 지속적으로 상승하면서 더위로 인한 불편함을 겪음
- 에어컨과 선풍기 사용이 증가하면서 전기료 및 환경 문제 또한 심각
- 인체감지 스마트 선풍기를 개발해 전기료 및 환경 문제에 대한 솔루션 제공


#### 💡 주요 기능
- #### 자동화
  >- 사용자가 감지되면 팬 모터가 자동으로 활성화
  >- 사용자가 렌즈의 시야에서 벗어나면 팬 모터가 자동으로 비활성화
- #### 인체 감지 및 추적
  >- 허스키렌즈를 사용해 대상을 학습
  >- 렌즈를 통해 학습한 대상을 포커싱 및 트래킹
  >- 서보 모터를 이용하여 팬 모터가 트래킹하는 대상 방향으로 회전

#### 💡 기대효과 
  - #### 작품의 기대효과
    >- <b>편리함</b> : 사용자가 직접 조작하지 않아도 자동으로 작동하여 편리함을 제공
    >- <b>쾌적한 환경 조성</b> : 사용자의 위치에 따라 바람을 제공하여 쾌적한 실내 환경을 유지
    >- <b>에너지 절약</b> : 인체 감지 기능을 통해 사용자가 있을 때만 작동하여 불필요한 전력량 소비 감소
    >- <b>환경 보호</b> : 에너지 절약을 통해 이산화탄소 배출을 줄이고, 지속 가능한 환경을 위한 기여를 목표

  - #### 교육적 기대효과
    >- <b>기술적 역량 향상</b> : 회로도 설계 및 C++ 언어를 사용한 프로그램 알고리즘 개발 역량 강화
    >- <b>문제 해결 능력 강화</b> : 프로젝트 진행 중 발생했던 다양한 문제를 해결함으로써  문제 해결 능력을 키움

#### 💡 활용분야
- 가정 및 사무실 환경에서 쾌적한 환경 유지 가능
- IoT 기술과 연계하여 스마트 홈 시스템의 일환으로 통합 가능


[📌 목차로 이동](#-목차)
<br><br>

## 🔨 사용기술
|구분|기능|설명|
|:---:|:---:|:---:|
|S/W|테스트|개별 모듈 설계 후 정상작동 단위테스트 진행|
|S/W|회로도 제작|모델에 대한 회로도 및 설계도 제작(Fritzing)|
|S/W|프로그램 개발|C++ 언어를 활용해 프로그램 스케치 및 업로드|
|H/W|3D모델링|모듈 간 연결을 위한 3D모델링(Tinkercad)|
|H/W|모델 어셈블리|제작한 회로도를 기반으로 모듈 및 3D모델 조립|
|H/W|하우징 제작|모델 케이스 제작|

[📌 목차로 이동](#-목차)
<br><br>
## 🗂️ 설계 및 구조
###  페이퍼 프로토타입을 진행해 전체적인 GUI 인터페이스를 디자인 함
<details>
  <summary><b>1. 회로도 및 설계도</b> (👈 Click)</summary>
  <br>
  <ul>
    <img src="https://github.com/user-attachments/assets/89732528-d2c4-46b0-9283-c76d5bd384cf" alt="페이퍼 프로토타입"><br><br>
  </ul>
</details><br>
<details>
  <summary><b>외관 및 내부</b> (👈 Click)</summary>
  <br>
  <li>
    외관 모습
  </li>

  |전면 외관|후면 외관|
  |:--:|:--:|
  |<img src="https://github.com/user-attachments/assets/2b275616-3051-453e-9e6c-93cb56403062" width="300" alt="페이퍼 프로토타입">|<img src="https://github.com/user-attachments/assets/b95975c2-870e-41f2-bc87-6d97e04c8640" width="300" alt="페이퍼 프로토타입">|    

  <li>
    내부 모습
  </li><br>
  <img src="https://github.com/user-attachments/assets/accfb5d4-27e5-439b-80a5-fcd4eb8acb91" width="400" alt="페이퍼 프로토타입"><br>
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



<br>


## ✅ 기대효과 및 활용분야

