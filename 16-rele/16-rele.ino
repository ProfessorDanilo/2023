int rele = 3;
int liga = 0, desliga = 1;
int led = 13;
void setup() {
  pinMode(rele, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(rele, HIGH);
  digitalWrite(led, liga);
  delay(5000);
  digitalWrite(rele, LOW);
  digitalWrite(led, desliga);
  delay(5000);
}
