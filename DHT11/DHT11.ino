#include <dht.h>
 

 
#define dht_apin A0 // Analog Pin sensor is connected to
 
dht DHT;
 

void setup(){
 
  Serial.begin(9600);
 
  delay(500);//Delay to let system boot
 
 
  delay(1000);//Wait before accessing Sensor
 
}//end "setup()"
 

 
void loop(){
 
  //Start of Program 
 
  DHT.read11(dht_apin);
 

 
    Serial.print("Humedad=");
 
    Serial.print(DHT.humidity);
 
    Serial.print("%  / ");
 
    Serial.print("Temperatura=");
 
    Serial.print(DHT.temperature); 
 
    Serial.println("°C");
 
  delay(2000);//Wait 5 seconds before accessing sensor again.

}

