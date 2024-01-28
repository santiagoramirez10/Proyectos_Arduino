#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "autenticacion";
char ssid[] = "RED-WIFI";
char pass[] = "CONTRASENA";
void setup(){
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
}
void loop(){
  Blynk.run();
}
