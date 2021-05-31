#define LED1 12
#define LED2 11
#define SW1 2
#define SW2 3
void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(SW1,INPUT_PULLUP);
  pinMode(LED2,OUTPUT);
  pinMode(SW2,INPUT_PULLUP);
}

void loop() {
  int sw1_in = digitalRead(SW1);
  int sw2_in = digitalRead(SW2);
  if(sw1_in==LOW){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    delay(2000);
  }
  else if(sw2_in==LOW){
    digitalWrite(LED2,HIGH);
    digitalWrite(LED1,LOW);
    delay(2000);
  }
  else{
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
  }
}
