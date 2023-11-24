void setup() {
  Serial.begin(9600);
}
 
void loop() {
  Serial.write("1\n");
  delay(1000);
  Serial.write("0\n");
  //delay(1000);
}