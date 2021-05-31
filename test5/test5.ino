#define LED 12
#define SW 2
void setup() {
  pinMode(LED,OUTPUT);
  pinMode(SW,INPUT);
}
void loop() {
  byte sw_in;
  sw_in=digitalRead(SW);
  if (sw_in==HIGH){
    digitalWrite(LED,HIGH);
    delay(1000);
  }
  else
    digitalWrite(LED,LOW);
}
