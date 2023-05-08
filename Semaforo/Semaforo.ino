int LED_Rojo=10;
int LED_Amarillo=11;
int LED_Verde=12;
int i=0;
void setup (){
  pinMode(LED_Rojo,OUTPUT);
  pinMode(LED_Amarillo,OUTPUT);
  pinMode(LED_Verde,OUTPUT);
 }
void loop(){
digitalWrite(LED_Rojo,LOW);
digitalWrite(LED_Amarillo,LOW);
digitalWrite(LED_Verde,LOW);
delay(10);
digitalWrite(LED_Verde,HIGH);
delay(8000);
i=0;
while (i<5){
  digitalWrite(LED_Verde,LOW);
  delay(300);
  digitalWrite(LED_Verde,HIGH);
  delay(300);
  i=i+1;  
  }
digitalWrite(LED_Verde,LOW);
digitalWrite(LED_Amarillo,HIGH);
delay(2500);
digitalWrite(LED_Amarillo,LOW);
digitalWrite(LED_Rojo,HIGH);
delay(7000); 
}
