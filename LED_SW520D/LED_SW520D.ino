int LED=13;
int SW_520D=2;
void setup(){
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(SW_520D, INPUT);
  digitalWrite(LED, LOW);
}
void loop(){
digitalWrite(LED,LOW);
if(digitalRead(SW_520D)==1){
  Serial.println("Alerta por inclinacion");
  digitalWrite(LED,HIGH);
  delay(2000);
  }
}
