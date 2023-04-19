void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  if (digitalRead(2)){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }
  delay(1000); // espera por 1000 milissegundos(1 s)
}
