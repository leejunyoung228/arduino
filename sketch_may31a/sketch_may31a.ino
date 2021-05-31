int n[8]={2,3,4,5,6,7,8,9};
void setup() {
  for(int i=0;i<8;i++) pinMode(n[i],OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if(Serial.available()){
    int a=Serial.parseInt();
    int l=n[a-1];
    digitalWrite(n[a-1],l^1);
  }

}
