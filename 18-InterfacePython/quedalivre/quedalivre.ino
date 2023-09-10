/*declarando as variaveis*/
int tempo_i = 0;
int tempo_f = 0;
int eletroima = 4;
int botao = A1;
int liga = 1, desliga = 0;


void setup(void)
{
  //iniciando comunicação serial
  Serial.begin(9600);
  //Configurando o dispositivo de queda livre
  pinMode(eletroima, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
}

void loop(void)
{
  for(int i = 0; i<100; i++){
    Serial.println(i);
    delay(1000);
  }   
}
