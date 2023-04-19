int botao = 8;
int led = 13;
void setup() {
  pinMode(botao,INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop() {
  if(!digitalRead(botao)){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
}
