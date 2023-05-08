int Suiche= 11;
int LED=13;
int estadoSuiche=0;
void setup (){
pinMode(Suiche,INPUT);
pinMode(LED,OUTPUT);
digitalWrite(LED,LOW);
}
void loop(){
estadoSuiche=digitalRead(Suiche);
digitalWrite(LED,estadoSuiche);
}
