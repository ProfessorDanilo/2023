/*declarando as variaveis*/
long tempo_i = 0;
long tempo_f = 0;
int eletroima = 12;//mudar para 4
int botao = A1;
int liga = 0, desliga = 1;//mude a depender de como ligar o relé
int led = 13;

void setup(void)
{ 
  //iniciando comunicação serial
  Serial.begin(9600);
  //Configurando o dispositivo de queda livre
  pinMode(eletroima, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  digitalWrite(eletroima, desliga);
  digitalWrite(led, desliga);
}

void loop(void)
{
  //veja que fica travado até que o botão seja pressionado
  while(digitalRead(botao)){};
  delay(100);
  digitalWrite(eletroima, liga);
  //Serial.print("eletroima_ligado");
  delay(5000);  
  //Serial.print("eletroima_desligado");
  digitalWrite(eletroima, desliga);
  tempo_i = micros();
  while(digitalRead(botao)){};
  tempo_f = micros();
  Serial.println(tempo_f - tempo_i);
  delay(5000);
}
