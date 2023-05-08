int SW_520D=2;
void setup(){
  Serial.begin(9600);
  pinMode(SW_520D, INPUT);
}
void loop(){
if(digitalRead(SW_520D)==1){
  Serial.println("Alerta por inclinacion");
  delay(2000);
  }
}
