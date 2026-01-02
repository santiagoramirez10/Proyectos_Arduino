int sensorHumedad=2;
int buzzer=3;
int humedad;
void setup() {
pinMode(sensorHumedad,INPUT);
pinMode(buzzer,OUTPUT);
}

void loop() {
  humedad=digitalRead(sensorHumedad);
  digitalWrite(buzzer,!humedad);
}
