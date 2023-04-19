int botao = 8;
int led = 13;
int estadoLed = LOW;
int estadoBotao;

void setup() {
  pinMode(botao,INPUT_PULLUP);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  Serial.println("Led Desligado!");
}

void loop() {
  estadoBotao = !digitalRead(botao);//pressionado -> HIGH; contrario, LOW
  if(estadoBotao == HIGH){
    if(estadoLed == LOW){
      digitalWrite(led, HIGH);
      estadoLed = HIGH;
      Serial.println("Led Ligado!");
      delay(500);
    }
    else{
      digitalWrite(led,LOW);
      estadoLed = LOW;
      Serial.println("Led Desligado!");
      delay(500);
    }
  }
}
