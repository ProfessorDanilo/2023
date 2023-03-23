void setup(){
  //configurando as portas de saída
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}
void loop(){  
  //ligando o LED verde
  digitalWrite(10, HIGH);
  //aguardando 5 segundos
  delay(5000);
  //desligando o sinal verde
  digitalWrite(10,LOW);
  //ligando o sinal amarelo
  digitalWrite(11, HIGH);
  //aguardando dois segundos
  delay(2000);
  //desligando o sinal amarelo
  digitalWrite(11,LOW);
  //ligando o sinal vermelho
  digitalWrite(12,HIGH);
  //aguardadando 5 segundos
  delay(5000);
  //desligando o sinal vermelho
  digitalWrite(12,LOW);  
  //agora o programa começara de novo
}
