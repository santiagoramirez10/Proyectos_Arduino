int LED_Rojo =6;
int LED_Verde=5; 
int LED_Azul=3;
void setup() {
pinMode(LED_Rojo,OUTPUT);//
pinMode(ledVerde,OUTPUT);
pinMode(ledAzul,OUTPUT);
}
void loop() {
analogWrite(LED_Rojo,0);
analogWrite(LED_Verde,255);
analogWrite(LED_Azul,255);
delay(1000);
}
