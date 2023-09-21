//sensor, buzzer e led incorporado
int echo = 2, trigger = 3, buzzer = 12, buildInPin = 13;

//portas dos leds
int led1 = 8, led2 = 9,
    led3 = 10, led4 = 11;

//variável para salvar o tempo
long tempo;

void setup() {
  pinMode(echo, INPUT);
  pinMode(trigger, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(buildInPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  //enviando o pulso TTL
  //vamos forçar o desligamento do trigger
  digitalWrite(trigger, LOW);
  //aqui usamos uma nova função para esperar microssegundos
  delayMicroseconds(2);
  //inicialndo o pulso TTL
  digitalWrite(trigger, HIGH);
  //aguardando 10 milissegundos
  delayMicroseconds(10);
  //finalizando o pulso TTL
  digitalWrite(trigger, LOW);
  //nova função: para medir o pulso
  //TTL enviada pelo módulo
  tempo = pulseIn(echo, HIGH);
  //Note que temos que informar a porta
  //e se o sinal lido é alto ou baixo
  //vamos exibir isso no serial monitor
  Serial.print("O tempo de medida do eco é de ");
  Serial.print(tempo);
  Serial.println(" microssegundos");
  //pulando linhas e esperando
  //1 segundo para fazer outra medida
  Serial.println();
  if (tempo < 250) {
    digitalWrite(buildInPin, HIGH);
    tone(buzzer, 555);
  } else  if (tempo < 600) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(buildInPin, HIGH);
    noTone(buzzer);
    tone(buzzer, 555);
    delay(100);
    digitalWrite(buildInPin, LOW);
    noTone(buzzer);
    delay(50);
  } else  if (tempo < 900) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    digitalWrite(buildInPin, HIGH);
    noTone(buzzer);
    tone(buzzer, 555);
    delay(200);
    digitalWrite(buildInPin, LOW);
    noTone(buzzer);
    delay(100);
  } else  if (tempo < 1200) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(buildInPin, HIGH);
    noTone(buzzer);
    tone(buzzer, 555);
    delay(300);
    digitalWrite(buildInPin, LOW);
    noTone(buzzer);
    delay(200);
  } else  if (tempo < 1700) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(buildInPin, HIGH);
    noTone(buzzer);
    tone(buzzer, 555);
    delay(400);
    digitalWrite(buildInPin, LOW);
    noTone(buzzer);
    delay(300);
  } else  if (tempo < 2000) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(buildInPin, HIGH);
    noTone(buzzer);
    tone(buzzer, 555);
    delay(500);
    digitalWrite(buildInPin, LOW);
    noTone(buzzer);
    delay(400);
  } else {    
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(buildInPin, LOW);
    noTone(buzzer);
  }
}
