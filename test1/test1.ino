#define g 12
#define y 11
#define r 10
void setup() {
  pinMode(y, OUTPUT);
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);

}

void loop() {
  digitalWrite(g, HIGH);
  digitalWrite(y, LOW);
  digitalWrite(r, LOW);
  delay(500);
  digitalWrite(g, LOW);
  digitalWrite(y, HIGH);
  digitalWrite(r, LOW);
  delay(500);
  digitalWrite(g, LOW);
  digitalWrite(y, LOW);
  digitalWrite(r, HIGH);
  delay(500);
}
