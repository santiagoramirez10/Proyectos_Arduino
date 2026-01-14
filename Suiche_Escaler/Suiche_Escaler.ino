int Suiche1=13;
int Suiche2=12;
int Bombillo=7;
int Estado1;
int Estado2;
int EstadoBombillo;

void setup(){
  pinMode(Suiche1,INPUT);
  pinMode(Suiche2,INPUT);
  pinMode(Bombillo,OUTPUT);
}

void loop(){
  Estado1=digitalRead(Suiche1);
  Estado2=digitalRead(Suiche2);
  EstadoBombillo=digitalRead(Bombillo);
  if (Estado1==0 || Estado2==0){
  	digitalWrite(Bombillo,!EstadoBombillo);
  }
  delay(500);
}