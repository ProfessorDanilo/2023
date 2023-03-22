/* PROGRAMA DE CONTROLE DE VELOCIDADE DE MOTOR CC
 * pinagem da ponte H L293D
 * 
 *              U
 *   ENABLE 1 1   16  Vss
 *   INPUT 1  2   15  INPUT 4
 *   OUTPUT 1 3   14  OUTPUT 4
 *        GND 4   13  GND
 *        GND 5   12  GND
 *   OUTPUT 2 6   11  OUTPUT 3
 *   INPUT 2  7   10  INPUT 3
 *         Vs 8   9  ENABLE 2
 *         
 * Ligações com arduino:
 * Digital ~3 Arduino ligada ao pino 1
 * Digital 2 Arduino ligada ao pino 2
 * Motor ligado ao ligada ao pino 3
 * GND do Arduino ligado ao pino 4
 * pino 5 desconectado
 * Motor ligado ao ligada ao pino 6
 * Digital 7 Arduino ligada ao pino 7
 * 5 V do Arduino ligado ao pino 8
 * 5 V do Arduino ligado ao pino 16
 * Demais pinos desligados
 * 
 * Enable serve para controlar a velocidade do motor usando analogWrite         
 * Input serve para controlar sentido de rotação do motor:
 *    HIGH e LOW: um sentido
 *    LOW e HIGH: outro sentido
 * Output: liga no motor CC
 * Vcc: tensão a ser fornecida para o motor
 * 
 * Material para ser usado em aula
 * Principal fonte: https://www.arduinoecia.com.br/controle-de-motor-dc-com-o-l293d-ponte-h/
 */
   
int enablePin = 3;   
int input1 = 2;
int input2 = 7;
   
void setup()  
{  
  //configuração dos pinos 
  pinMode(enablePin, OUTPUT);  
  pinMode(input1, OUTPUT);  
  pinMode(input2, OUTPUT);  
}  
   
void loop()  
{  
  //escolhe a velocidade (entre 0 e 255)
  int velocidade = 255;  
  analogWrite(enablePin, velocidade);   

  //liga o motor em um sentido
  digitalWrite(input1, LOW);  
  digitalWrite(input2, HIGH);  
  delay(3000);  

  //Para o motor  
  para_motor();  

  //liga o motor no outro sentido
  digitalWrite(input1, HIGH);  
  digitalWrite(input2, LOW);  
  delay(3000);  
  para_motor();  
}  
    
void para_motor()  
{  
  digitalWrite(input1, LOW);  
  digitalWrite(input2, LOW);  
  delay(3000);  
}  
