/*ESTE PROGRAMA DEU CERTO COM O CIRCUITO DO CAUÃ
 * Arquivo disponível em 
 * https://github.com/ProfessorDanilo/2023/tree/main/18-InterfacePython
 */
/*declarando as variaveis*/
long tempo_i = 0;
long tempo_f = 0;
int eletroima = 5;//mudar para 4
int botao = 6;
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
  digitalWrite(led, LOW);
}

void loop(void)
{
  //veja que fica travado até que o botão seja pressionado
  while(digitalRead(botao));
  delay(100);
  digitalWrite(eletroima, liga);  
  digitalWrite(led, HIGH);
  //Serial.print("eletroima_ligado");
  delay(5000);  
  //Serial.print("eletroima_desligado");  
  digitalWrite(led, LOW);
  digitalWrite(eletroima, desliga);
  delay(10);//Cauã, este é aquele Delay que você falou
  tempo_i = micros();
  while(digitalRead(botao));
  tempo_f = micros();
  Serial.println(tempo_f - tempo_i+10000);
  delay(5000);
}
