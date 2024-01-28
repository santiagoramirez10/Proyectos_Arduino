#include <dht.h>
#define dht_apin A0
dht DHT;
void setup(){
Serial.begin(9600);
delay(500);
Serial.println("Sensor de temperatura y humedad DHT11");
delay(1000);
} 
void loop(){ 
DHT.read11(dht_apin);
Serial.print("Porcentaje de humedad = ");
Serial.print(DHT.humidity);
Serial.print("%  ");
Serial.print("Temperatura = ");
Serial.print(DHT.temperature);
Serial.println("C  ");
delay(5000);
} 
