#include <Servo.h>
#include<math.h>
int laser = 2,
    base = 5,
    topo = 3,
    posTopo = 0,
    posBase = 130,
    tempo = 2;
float frequenciaHorizontalRelativaAVertical = 5,
      deltaFaseInicial = 0,
      amplitudeVertical = 45,
      amplitudeHorizontal = 30;//maximo 90
      
Servo servoBase;
Servo servoTopo;

void setup ()
{
  pinMode(laser, OUTPUT);
  servoBase.attach(topo);
  servoTopo.attach(base);
  servoBase.write(posBase);//começar com a base para frente
  servoTopo.write(posTopo);//começar com o topo na horizontal
  delay(50);
  digitalWrite(laser, HIGH);
}
 
void loop()
{
  for(float t = 0; t < 1000000; t++){
    posBase = (int) amplitudeHorizontal*(sin(frequenciaHorizontalRelativaAVertical*t/1000 + deltaFaseInicial))+130; 
    servoBase.write(posBase); 
    posTopo = (int) amplitudeVertical*(sin(t/1000) + 1);  
    servoTopo.write(posTopo);
    delay(tempo);
  }
}
