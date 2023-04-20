int buttonState = HIGH; //estado inicial do botão
int lastButtonState = HIGH; //estado anterior do botão
int ledState = 0; //estado inicial do LED
int numLeds = 3; //quantidade de LEDs

void setup() {
  pinMode(5, INPUT_PULLUP); //configura o pino 5 como entrada com resistor pull-up interno
  for (int i = 2; i <= 2 + numLeds - 1; i++) { //configura os pinos dos LEDs como saída
    pinMode(i, OUTPUT);
  }
}

void loop() {
  buttonState = digitalRead(5); //leitura do botão
  if (buttonState != lastButtonState) { //se o estado do botão mudou
    if (buttonState == LOW) { //se o botão foi pressionado
      ledState++; //incrementa o estado do LED
      if (ledState > numLeds) { //se todos os LEDs estão acesos
        ledState = 0; //volta para o estado inicial
      }
    }
  }
  lastButtonState = buttonState; //atualiza o estado anterior do botão
  for (int i = 2; i <= 2 + numLeds - 1; i++) { //atualiza o estado dos LEDs
    if (i - 2 < ledState) { //se o LED deve estar aceso
      digitalWrite(i, HIGH);
    } else { //se o LED deve estar apagado
      digitalWrite(i, LOW);
    }
  }
  delay(10); //aguarda um curto período de tempo para evitar leituras instáveis do botão
}
