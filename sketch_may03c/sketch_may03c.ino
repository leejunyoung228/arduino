void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
}

void loop() {
  if(Serial.available()){
    char ch=Serial.read();
    Serial.write(ch);
    if(ch=='1'){
      digitalWrite(2,HIGH);
    }
    if(ch=='0'){
      digitalWrite(2,LOW);
    }
  }
}
