void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}
 
void loop()
{
  while(Serial.available())
  {
    int value = Serial.read();
    Serial.println(value);
    if (value=='1')
    {
      digitalWrite(13,HIGH);
    }
    else
    {digitalWrite(13,LOW);}
  }
}