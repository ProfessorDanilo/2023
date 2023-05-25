#include <Servo.h>
int laser = 2,
    base = 5,
    topo = 3,
    botao = 4,
    joyBase = A0,
    joyTopo = A1,
    posTopo = 0,
    posBase = 130;

Servo servoBase;
Servo servoTopo;

void setup ()
{
  pinMode(laser, OUTPUT);
  pinMode(botao, INPUT);
  servoBase.attach(topo);
  servoTopo.attach(base);
  servoBase.write(posBase);//começar com a base para frente
  servoTopo.write(posTopo);//começar com o topo na horizontal
  delay(500);
  digitalWrite(laser, HIGH);
  //Serial.begin(9600);
}
 
void loop()
{
  //Serial.println(analogRead(joyBase));
  posBase = map(analogRead(joyBase), 220, 800, 200, 60); 
  servoBase.write(posBase); 
  posTopo = map(analogRead(joyTopo), 0, 1023, 100, 0);  
  servoTopo.write(posTopo);
  //delay(700);
}
