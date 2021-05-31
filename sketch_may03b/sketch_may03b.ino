void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
}

void loop() {
  if(Serial.available()){
    long a=Serial.parseInt();
    if(a==1){
      digitalWrite(2,HIGH);
    }
    if(a==0){
      digitalWrite(2,LOW);
    }
  }
}
