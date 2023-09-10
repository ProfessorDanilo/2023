int LED = 2, LDR = A0;
void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(analogRead(LDR) < 100){
    digitalWrite(LED, HIGH); 
  }
  else{
    digitalWrite(LED, LOW);
  }
  Serial.println(analogRead(LDR));
  delay(1000);
}
