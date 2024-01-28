int Disparo=10;
int Eco=9;
long Duracion; 
long Distancia;   
void setup() {                
  Serial.begin (9600);  
  pinMode(Eco, INPUT);     
  pinMode(Disparo, OUTPUT);    
} 
void loop() {
  digitalWrite(Disparo,LOW);
  delay(4);
  digitalWrite(Disparo,HIGH);
  delay(10);
  digitalWrite(Disparo,LOW);
  Duracion=pulseIn(Eco,HIGH);
  Distancia=Duracion/58;
  Serial.println(Distancia);
  delay(1000);
}

