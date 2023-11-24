int pin = 2;
volatile int state = LOW;
 
void setup(){
pinMode(13,OUTPUT);
attachInterrupt(digitalPinToInterrupt(pin),blink,CHANGE);
}
 
void loop(){
  if (state == LOW){
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
  }
  else
   digitalWrite(13,HIGH);
  
}
 
void blink(){
state = !state; 
}
