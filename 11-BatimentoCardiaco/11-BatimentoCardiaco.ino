int PulseSensorPurplePin = 0; // Pulse Sensor PURPLE WIRE connected to ANALOG PIN 0
int LED13 = 13; // The on-board Arduion LED
 
 
int Signal; // holds the incoming raw data. Signal value can range from 0-1024
int Threshold = 550; // Determine which Signal to "count as a beat", and which to ingore.
 
 
// The SetUp Function:
void setup() {
pinMode(LED13,OUTPUT); // pin that will blink to your heartbeat!
Serial.begin(9600); // Set's up Serial Communication at certain speed.
 
}
 
// The Main Loop Function
void loop() {
 
Signal = analogRead(PulseSensorPurplePin); // Read the PulseSensor's value.
// Assign this value to the "Signal" variable.
 
Serial.println(Signal); // Send the Signal value to Serial Plotter.
 
 
if(Signal > Threshold){ // If the signal is above "550", then "turn-on" Arduino's on-Board LED.
digitalWrite(LED13,HIGH);
} else {
digitalWrite(LED13,LOW); // Else, the sigal must be below "550", so "turn-off" this LED.
}
 
 
delay(10);
}

/*
int sensorPin = A0;
int period = 500;
int HearHate_porSegundo=0;
int HearHate_porMin = 0;
int count = 0;
int countBeat=0;
const int Calibration_Value = 10;

float oldValue = 0;
float rawValue = 0;



void setup()
{ 
  Serial.begin(9600);
  delay(100);  
  Serial.println("Iniciando ...");
}


void loop()
{
   rawValue = analogRead (sensorPin);

   if( abs(rawValue - oldValue) >= Calibration_Value)
   {
      countBeat++;
   }
   count++;

   //cada 1 segundo faz essa conta
   if(count == 10)
   {
      Serial.println(rawValue);
      HearHate_porSegundo = countBeat;
      HearHate_porMin =60*countBeat;
      Serial.print("HearHate_porSegundo ");
      Serial.println(HearHate_porSegundo);
      Serial.print("HearHate_porMin ");
      Serial.println(HearHate_porMin);
      count=0;
      countBeat=0;
   }
   
  oldValue = rawValue;
  delay(period);
}
*/
