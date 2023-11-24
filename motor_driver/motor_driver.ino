const int IN1_A = 8;
const int IN2_A = 7;
const int ENA_A = 9;
const int IN1_B = 10;
const int IN2_B = 11;
const int ENA_B = 12;


void setup() {
  pinMode(IN1_A, OUTPUT);
  pinMode(IN2_A, OUTPUT);
  pinMode(ENA_A, OUTPUT);
  pinMode(IN1_B, OUTPUT);
  pinMode(IN2_B, OUTPUT);
  pinMode(ENA_B, OUTPUT);

  // Disable the motors
  digitalWrite(ENA_A, LOW);
  digitalWrite(ENA_B, LOW);
}


void loop() {
  analogWrite(ENA_A,255); //Speed Control
  analogWrite(ENA_B,255); //Speed Control

  //Control Direction
  digitalWrite(IN1_A,HIGH);
  digitalWrite(IN1_B,LOW);
  digitalWrite(IN2_A,HIGH);
  digitalWrite(IN2_B,HIGH);
  delay(1000);
  digitalWrite(IN1_A,LOW);
  digitalWrite(IN1_B,HIGH);
  digitalWrite(IN2_A,LOW);
  digitalWrite(IN2_B,HIGH);
  delay(1000);
}
