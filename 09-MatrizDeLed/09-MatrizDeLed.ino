int linha[8] = {2, 3, 4, 5, 6, 7, 8, 9};
int coluna[8] = {12, 13, 14, 15, 16, 17, 18, 19};

void setup() {
  for(int i = 0; i < 9; i++){
    pinMode(linha[i], OUTPUT);
    digitalWrite(linha[i], HIGH);//PARA LIGAR LINHA HIGH COLUNA LOW
    pinMode(coluna[i], OUTPUT);
    digitalWrite(coluna[i], LOW);
  } 
  delay(500);  
  desligaTudo();
  delay(500);
}

void loop() {
  delay(10);
  contorna();
  delay(10);
}




void ligaTudo(){
  for(int i = 1; i < 9; i++){
    digitalWrite(linha[i], HIGH);
    digitalWrite(coluna[i], LOW);
  }
  delay(100);
  for(int i = 1; i < 9; i++){
    digitalWrite(linha[i], LOW);
    digitalWrite(coluna[i], LOW);
  }
  delay(100);
}

void desligaTudo(){
  for(int i = 0; i < 9; i++){
    digitalWrite(linha[i], LOW);
    digitalWrite(coluna[i], LOW);
  }
}

void contorna(){  
  digitalWrite(linha[0], HIGH);
  digitalWrite(coluna[0], LOW);  
  digitalWrite(coluna[1], HIGH);
  digitalWrite(coluna[2], HIGH);
  digitalWrite(coluna[3], HIGH);
  digitalWrite(coluna[4], HIGH);
  digitalWrite(coluna[5], HIGH);
  digitalWrite(coluna[6], HIGH);
  digitalWrite(coluna[7], HIGH);  
  digitalWrite(coluna[8], HIGH);  
}
