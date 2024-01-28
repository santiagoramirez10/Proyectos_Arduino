#include <IRremote.h>
int Receptor=11;
int LED=13;
IRrecv irrecv(Receptor);
decode_results codigo;
void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode(LED, OUTPUT);
}
void loop(){
  if (irrecv.decode(&codigo)){
    Serial.println(codigo.value)
    if (codigo.value==33444015){
      digitalWrite(LED,HIGH);
    }
    if (codigo.value==33480735){
      digitalWrite(LED,LOW);
    }
    delay(500);
    irrecv.resume();
   }
}
