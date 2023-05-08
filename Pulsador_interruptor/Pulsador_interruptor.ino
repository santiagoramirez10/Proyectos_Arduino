int Pulsador= 2;
int LED=4;
int estadoPulsador=0;
int estadoLED=0;
void setup (){
pinMode(Pulsador,INPUT);
pinMode(LED,OUTPUT);
digitalWrite(LED,LOW);
}
void loop(){
estadoPulsador=digitalRead(Pulsador);
if (estadoPulsador==LOW){
  estadoLED=digitalRead(4);
  digitalWrite(LED,!estadoLED);
  delay(1000);
  }
}
