int leitura;
int entradaAnalogica = A0;
int saidaPWM = 3;

void setup() {
  pinMode(entradaAnalogica, INPUT);
  pinMode(saidaPWM, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  leitura = analogRead(entradaAnalogica);
  Serial.print("Valor lido na porta analogica: ");
  Serial.println(leitura);
  analogWrite(saidaPWM, leitura/4);
  delay(50);
}
