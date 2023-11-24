#include <Adafruit_NeoPixel.h>
#define PIN 5
Adafruit_NeoPixel strip = Adafruit_NeoPixel(20, PIN, NEO_GRB + NEO_KHZ800);
void setup()
{
strip.begin();
}
void loop()
{
int c1 = random(0, 255);
int c2 = random(0, 255);
int c3 = random(0, 255);


for(int k = 0; k < 20; k++)
{
strip.setPixelColor(k, strip.Color(c1, c2, c3));
strip.show();
delay(50);


if (k == 20)
{
k = 0;
}
}
}