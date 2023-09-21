/*seguinto o material apresentado em aul
 * vamos montar as conexões definindo as
 * variáveis
 */
const int  enableEsqueda = 5,
      input1_esquerda = 6,
      input2_esquerda = 7,
      reflexao_esquerda = 12,
      enableDireita = 9,
      input3_direita = 10,
      input4_direita = 11,
      reflexao_direita = 13;
//escolhendo uma velocidade
int velocidade = 255;      

//tempo de espera para o Arduíno
//em milissegundos
int espera = 50;

//definindo os pinos do Arduíno
void setup(){
  pinMode(enableEsqueda,OUTPUT);
  pinMode(input1_esquerda,OUTPUT);
  pinMode(input2_esquerda,OUTPUT);
  pinMode(reflexao_esquerda,INPUT);
  pinMode(enableDireita,OUTPUT);
  pinMode(input3_direita,OUTPUT);
  pinMode(input4_direita,OUTPUT);
  pinMode(reflexao_direita,INPUT);
}

//Criando as funções que farão o
//Arduíno andar (frente/direita/esquerda)
void frente(){
  analogWrite(enableEsqueda, velocidade);
  analogWrite(enableDireita, velocidade);
  //note que os comandos a seguir podem fazer
  //seu motor girar ao contrário do esperado
  digitalWrite(input1_esquerda, HIGH);
  digitalWrite(input2_esquerda, LOW);
  digitalWrite(input3_direita, HIGH);
  digitalWrite(input4_direita, LOW);
}

void esquerda(){    
  analogWrite(enableEsqueda, velocidade);
  analogWrite(enableDireita, 0);
  //note que os comandos a seguir podem fazer
  //seu motor girar ao contrário do esperado
  digitalWrite(input1_esquerda, HIGH);
  digitalWrite(input2_esquerda, LOW);

  digitalWrite(input3_direita, LOW);
  digitalWrite(input4_direita, LOW);
}

void direita(){  
  analogWrite(enableEsqueda, 0);
  analogWrite(enableDireita, velocidade);
  
  digitalWrite(input1_esquerda, LOW);
  digitalWrite(input2_esquerda, LOW);

  //note que os comandos a seguir podem fazer
  //seu motor girar ao contrário do esperado
  digitalWrite(input3_direita, HIGH);
  digitalWrite(input4_direita, LOW);
}

void parar(){   
  analogWrite(enableEsqueda, 0);
  analogWrite(enableDireita, 0);  
  digitalWrite(input1_esquerda, LOW);
  digitalWrite(input2_esquerda, LOW);
  digitalWrite(input3_direita, LOW);
  digitalWrite(input4_direita, LOW);
}

//agora o programa em loop
void loop(){
  //lendo os sensores
  int sensorEsquerdo = digitalRead(reflexao_esquerda);
  int sensorDireito = digitalRead(reflexao_direita);
  //analisando os casos para seguir a linha
  //quando no branco o sensor retorna 0
  //quando no preto o sensor retorna 1
  if(sensorEsquerdo == 0 && sensorDireito == 0){
    frente();
    delay(espera);
  }
  else if(sensorEsquerdo == 1 && sensorDireito == 0){
    direita();
    delay(espera);
  }
  else if(sensorEsquerdo == 0 && sensorDireito == 1){
    esquerda();
    delay(espera);
  }
  else {
    parar();
    delay(espera);
  }
}
