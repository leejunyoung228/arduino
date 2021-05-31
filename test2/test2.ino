void setup() {
  for(int i=2;i<=9;i++)
    pinMode(i,OUTPUT);
}

void loop() {
  for(int i=2;i<=9;i++){
    for(int j=2;j<=9; j++){
      if(i==j)
        digitalWrite(j,HIGH);
      else
        digitalWrite(j,LOW);
    }
    delay(500);
  }
}
