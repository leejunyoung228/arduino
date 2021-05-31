int n[8]={2,3,4,5,6,7,8,9};
int m[8]={0,0,0,0,0,0,0,0};
void setup() {
  for(int i=0;i<8;i++) pinMode(n[i],OUTPUT);
  Serial.begin(9600);
}
void loop() {
  if(Serial.available()){
    int a=Serial.parseInt();
    m[a-1]=m[a-1]^1;
    digitalWrite(n[a-1],m[a-1]);
  }
}
