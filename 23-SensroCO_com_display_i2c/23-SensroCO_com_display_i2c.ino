#include <Wire.h>
#include <LiquidCrystal_I2C.h>

//CONEXÕES
int VCCdoSensorMQ7 = A1,
    saidaSensorMQ7 = A0,
    led = 2;

//intervalo de leitura em segundos
int tempo = 1;

#define col 16
#define lin 2
#define ende 0x27

char primeiraLinha[16] = "Concentracao CO:";
char seguro[16] = "  Nivel Seguro  ";
char medio[16] = "  Nivel Medio   ";
char alto[16] = "  Nivel ALTO    ";
char muitoAlto[16] = "NIVEL MUITO ALTO";
int leitura;

void cabecalho(){
  
}


LiquidCrystal_I2C lcd(ende, col, lin);

void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0, 0);   
  Serial.begin(9600);
  pinMode(VCCdoSensorMQ7, OUTPUT);
  pinMode(led, OUTPUT);
}

void Cabecalho(){
  lcd.setCursor(0, 0);
  for(int i = 0; i<16; i++){
    lcd.print(primeiraLinha[i]);
  }
}

void nivelSeguro(){
  lcd.clear();
  Cabecalho();
  lcd.setCursor(0, 1);
  for(int i = 0; i<16; i++){
    lcd.print(seguro[i]);
  }
  delay((tempo-1)*1000); 
}

void nivelMedio(){
  lcd.clear();
  Cabecalho();
  lcd.setCursor(0, 1);
  for(int i = 0; i<16; i++){
    lcd.print(medio[i]);
  }
  for(int i = 1; i<tempo; i++){
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
  } 
}

void nivelAlto(){
  lcd.clear();
  Cabecalho();
  lcd.setCursor(0, 1);
  for(int i = 0; i<16; i++){
    lcd.print(alto[i]);
  }
  for(int i = 1; i<tempo*2; i++){
    digitalWrite(led, HIGH);
    delay(250);
    digitalWrite(led, LOW);
    delay(250);
  }
}

void nivelMuitoAlto(){
  lcd.clear();
  Cabecalho();
  lcd.setCursor(0, 1);
  for(int i = 0; i<16; i++){
    lcd.print(muitoAlto[i]);
  }
  for(int i = 1; i<tempo*10; i++){
    digitalWrite(led, HIGH);
    delay(50);
    digitalWrite(led, LOW);
    delay(50);
  }
}

void loop()
{
  digitalWrite(VCCdoSensorMQ7, HIGH);
  delay(100);
  leitura = analogRead(saidaSensorMQ7);
  if(leitura<510){
    nivelSeguro();
  }
  else if(leitura<520){
    nivelMedio();
  }
  else if(leitura<540){
    nivelAlto();
  }
  else{
    nivelMuitoAlto();
  }
  Serial.println(leitura);
  delay(100);
}
