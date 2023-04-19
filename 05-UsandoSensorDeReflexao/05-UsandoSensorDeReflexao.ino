void setup(){
  //ligaremos o sensor no pino 8
  pinMode(8, INPUT); 
  //acionaremos o LED incorporado no Arduino
  pinMode(13, OUTPUT); 
}

void loop(){
  //liga o LED se o sinal de entrada for baixo
  if(digitalRead(8) == LOW){
      digitalWrite(13, HIGH);
  }
  //desliga o LED se o sinal de entrada for alto
  else{ 
    digitalWrite(13, LOW);
  }
}
