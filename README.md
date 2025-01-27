<h1 align="center">
  <br>
  <img src="https://github.com/user-attachments/assets/7481a3d6-9780-450c-8971-2f59b630153a" alt="스마트 인체감지 선풍기" width="300">
  <br>
  스마트 인체감지 선풍기
  <br>
</h1>
<h3>✅ Arduino Uno(R3)를 사용하여 개발한 프로젝트입니다.</h3><br>

## 📌 목차
1. [🖥️ 프로젝트 개요](#%EF%B8%8F-프로젝트-개요)
2. [🔨 사용기술](#-사용기술)
3. [🗂️ 설계 및 구조](#%EF%B8%8F-설계-및-구조)
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
<details>
  <summary><b>1. 회로도 및 설계도</b> (👈 Click)</summary>
  <br>
  <img src="https://github.com/user-attachments/assets/89732528-d2c4-46b0-9283-c76d5bd384cf" alt="회로도 및 설계도"><br><br>
</details>
<details>
  <summary><b>2. 3D모델링</b> (👈 Click)</summary>
  <br>
  <img src="https://github.com/user-attachments/assets/8d527d1d-6858-4d2d-b68b-c47f5e797b34" alt="3D모델링"><br><br>
</details>
<details>
  <summary><b>3. 외관 및 내부</b> (👈 Click)</summary>
  <br>
  <li>
    외관 모습
  </li>

  |전면 외관|후면 외관|
  |:--:|:--:|
  |<img src="https://github.com/user-attachments/assets/2b275616-3051-453e-9e6c-93cb56403062" width="300" alt="전면 외관">|<img src="https://github.com/user-attachments/assets/b95975c2-870e-41f2-bc87-6d97e04c8640" width="300" alt="후면 외관">|    

  <li>
    내부 모습
  </li>

  |내부 사진|
  |:--:|
  |<img src="https://github.com/user-attachments/assets/accfb5d4-27e5-439b-80a5-fcd4eb8acb91" width="400" alt="내부 사진">|
  <br>
</details><br>

[📌 목차로 이동](#-목차)
<br><br>

## 🔧 단위테스트
<details>
  <summary><b>1. 허스키렌즈</b> (👈 Click)</summary>

  |코드|영상|
  |:--:|:--:|
  |<img src="https://github.com/user-attachments/assets/aaf779b8-fdc0-4cdf-ad71-6cac63db4f65" width="300" alt="허스키렌즈 코드">|<img src="https://github.com/user-attachments/assets/a8b367ef-ffbe-40ec-a1d0-05a4c6509d9b" width="300" alt="허스키렌즈 영상">|  
</details>
<details>
  <summary><b>2. 팬 모터</b> (👈 Click)</summary>
  
  |코드|영상|
  |:--:|:--:|
  |<img src="https://github.com/user-attachments/assets/1373cb74-9997-4ff4-b6af-0f3b881f8c90" width="300" alt="팬 모터 코드">|<img src="https://github.com/user-attachments/assets/fa5848bf-6fbd-4a7d-89c6-14e278ac4ac6" width="300" alt="팬 모터 영상">|  
</details>
<details>
  <summary><b>3. 서보 모터</b> (👈 Click)</summary>

  |코드|영상|
  |:--:|:--:|
  |<img src="https://github.com/user-attachments/assets/c99c7add-cf29-477c-9b59-3506a753c9cd" width="300" alt="서보 모터 코드">|<img src="https://github.com/user-attachments/assets/8bcc6b17-e995-4bfb-9d1e-2ad87f0cf94c" width="300" alt="서보 모터 영상">|  
</details><br>

[📌 목차로 이동](#-목차)
<br><br>

## 🛠️ 통합테스트
<details>
  <summary><b>1. 대상 학습 및 활성화</b> (👈 Click)</summary>
  <br>
  <li>
    허스키렌즈 오른쪽 버튼을 눌러 대상 학습 및 팬 모터 활성화
  </li>
  <img src="https://github.com/user-attachments/assets/d241506b-bf18-4191-a234-dd84cb6e0623" height="400" alt="통합테스트1"><br><br>
</details>
<details>
  <summary><b>2. 대상 추적</b> (👈 Click)</summary>
  <br>
  <li>
    학습한 대상의 화면 위치를 서보 모터의 각도 계산을 통해 대상 추적
  </li>
  <img src="https://github.com/user-attachments/assets/f10a88d9-42df-4b35-9921-4f8a256557af" height="400" alt="통합테스트2"><br><br>
</details>
<details>
  <summary><b>3. 종료 및 비활성화 </b> (👈 Click)</summary>
  <br>
  <li>
    학습한 대상이 인식되지 않거나 화면 밖으로 나갈 시 비활성화
  </li>
  <img src="https://github.com/user-attachments/assets/7e6e5fec-42bb-49c5-9581-f18c8df62f9f" height="400" alt="통합테스트3"><br><br>
</details><br>
[📌 목차로 이동](#-목차)
<br><br>


## 📽️ 시연영상
[[📹 시연영상]](https://youtube.com/shorts/aCKXvcLMDwQ)<br>

[📌 목차로 이동](#-목차)
<br><br>

## 🗃️ 발표자료
[[📂 발표자료]](https://docs.google.com/presentation/d/1TgUm4K5j95qNAFvkZ2HAKySSEjJyfjqY/edit#slide=id.p1)<br>

[📌 목차로 이동](#-목차)
