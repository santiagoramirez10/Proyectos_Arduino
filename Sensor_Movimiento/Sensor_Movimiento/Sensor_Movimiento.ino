int sensorMovimiento=3;
int LED=13;
void setup() {
pinMode(sensorMovimiento,INPUT);
pinMode(LED,OUTPUT);
Serial.begin(9600);
}

void loop() {
Serial.println(digitalRead(sensorMovimiento));

}
