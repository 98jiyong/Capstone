int A = 13;
int B = 12;
 
void setup() {
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);  
}
 
void loop() {
  digitalWrite(A,LOW); //팬모터가 A방향으로 회전
  digitalWrite(B,HIGH);
  delay(2000); //2초 후
 
  digitalWrite(A,HIGH); // 전체 정지
  digitalWrite(B,HIGH);
  delay(2000); //5초 후
  
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW); //팬모터가 B방향으로 회전
  delay(2000); //2초 후
 
  digitalWrite(A,HIGH); // 전체 정지
  digitalWrite(B,HIGH);
  delay(2000); //5초 후
 
}
