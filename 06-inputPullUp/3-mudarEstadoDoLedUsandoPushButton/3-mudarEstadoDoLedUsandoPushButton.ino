int botao = 8;
int led = 13;
int estadoLed = LOW;
int estadoBotao;

void setup() {
  pinMode(botao,INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop() {
  estadoBotao = !digitalRead(botao);//pressionado -> HIGH; contrario, LOW
  if(estadoBotao == HIGH){
    if(estadoLed == LOW){
      digitalWrite(led, HIGH);
      estadoLed = HIGH;
      delay(500);
    }
    else{
      digitalWrite(led,LOW);
      estadoLed = LOW;
      delay(500);
    }
  }
}
