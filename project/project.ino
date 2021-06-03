#include <Adafruit_NeoPixel.h>
#define PIN 3
#define LEDNUM 8
int s = A1;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(LEDNUM, PIN, NEO_GRB + NEO_KHZ800);
#define bu 4
void setup() {
  strip.begin();
  Serial.begin(9600);                                       
}
int r,g,b;
void loop() {
  Serial.println(analogRead(s));
  if(analogRead(s)>1000){
    for(int i=0;i<8;i++){
      //strip.setPixelColor(i, 0, 0, 0);
      //strip.show();
      }
     }
  if(digitalRead(bu)==HIGH){
      r=random(0,255);
      g=random(0,255);
      b=random(0,255);
    for(int i=0;i<8;i++){
      strip.setPixelColor(i, r, g, b);
      strip.show();
    }
  }
}
