void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
}
byte led;
void loop() {
  if(Serial.available()){
    int a=Serial.parseInt();
    if (a==1){
      led=led^1;
      digitalWrite(2,a);
      }
    
      
    }
}
