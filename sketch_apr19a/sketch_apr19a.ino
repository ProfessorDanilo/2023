void setup() {
  pinMode(8,INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop() {
  if(!digitalRead(8)){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }
}
