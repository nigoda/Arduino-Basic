void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(A1, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  int voltage = map(sensorValue, 0.0, 1023.0, 0.0, 255.0);
  analogWrite(A1,voltage);
  float voltage1 = sensorValue * (5.0/1023.0);
  Serial.print(sensorValue);
  Serial.print(" eq volt = ");
  Serial.print(voltage);
  Serial.print(";");
  Serial.println(voltage1);
  delay(1);        // delay in between reads for stability
}
