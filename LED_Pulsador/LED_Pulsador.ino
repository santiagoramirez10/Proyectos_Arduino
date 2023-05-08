int Pulsador= 11;
int LED=13;
int estadoPulsador=0;
void setup (){
pinMode(Pulsador,INPUT);
pinMode(LED,OUTPUT);
digitalWrite(LED,LOW);
}
void loop(){
estadoPulsador=digitalRead(Pulsador);
digitalWrite(LED,!estadoPulsador);
}
