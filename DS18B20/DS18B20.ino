#include <OneWire.h>             
#include <DallasTemperature.h>
OneWire ourWire(2);
DallasTemperature sensors(&ourWire);
void setup() {
delay(1000);
Serial.begin(9600);
sensors.begin();
}
void loop() {
sensors.requestTemperatures();
float Temperatura= sensors.getTempCByIndex(0);
Serial.print("Temperatura= ");
Serial.print(Temperatura);
Serial.println(" °C");
delay(1000);                     
}
