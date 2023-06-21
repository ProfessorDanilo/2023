/*********
  Rui Santos
  Complete project details at https://randomnerdtutorials.com  
  Based on the Dallas Temperature Library example
*********/

#include <OneWire.h>
#include <DallasTemperature.h>
int minutos = 0;
// Data wire is conntec to the Arduino digital pin 4
#define ONE_WIRE_BUS 4

// Setup a oneWire instance to communicate with any OneWire devices
OneWire oneWire(ONE_WIRE_BUS);

// Pass our oneWire reference to Dallas Temperature sensor 
DallasTemperature sensors(&oneWire);

void setup(void)
{
  // Start serial communication for debugging purposes
  Serial.begin(9600);
  // Start up the library
  sensors.begin();
}

void loop(void){ 
  // Call sensors.requestTemperatures() to issue a global temperature and Requests to all devices on the bus
  sensors.requestTemperatures();  
  minutos++;
  Serial.print(minutos);
  Serial.print(", ");
  // Why "byIndex"? You can have more than one IC on the same bus. 0 refers to the first IC on the wire
  //C de Celcius... para Fahrenheit, use getTempFByIndex
  Serial.println(sensors.getTempCByIndex(0)); 
  //espera um minuto
  delay(59320);
}
