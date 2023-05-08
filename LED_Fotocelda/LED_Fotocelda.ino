int potenciometro;
int fotorresistencia;
int LED=13;
void setup() {              
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(LED,OUTPUT);
}
void loop() {
potenciometro=analogRead(A0);
fotorresistencia=analogRead(A1);
if (fotorresistencia>potenciometro){
  digitalWrite(LED,HIGH);
}
else{
  digitalWrite(LED,LOW);
  }
}
