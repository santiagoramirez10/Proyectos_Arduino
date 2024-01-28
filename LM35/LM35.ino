int Sensor_LM35=A0;
float Temperatura = 0; 
void setup(){
Serial.begin (9600);
}
void loop(){
Temperatura=(analogRead(Sensor_LM35)*500)/1023;
Serial.println(Temperatura);
delay (1000);
}
