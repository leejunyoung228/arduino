void setup() {
  Serial.begin(9600);
  for(int i=2;i<10;i++) pinMode(i,OUTPUT);
}
void loop() {
  if(Serial.available()){
    byte a=Serial.parseInt();
    for(int i=0;i<8;i++) digitalWrite(i+2,a&(0x01<<i));
  }
}
