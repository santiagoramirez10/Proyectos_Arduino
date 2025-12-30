int Buzzer=13;
int sensorFlama=3;
int Flama;

void  setup(){
  pinMode(Buzzer,OUTPUT);
  pinMode(sensorFlama,INPUT);
}

void  loop(){ 
  Flama=digitalRead(sensorFlama);
  if(Flama==HIGH){
    digitalWrite(Buzzer,HIGH);
  }
  else{
    digitalWrite(Buzzer,LOW);
  }
}


