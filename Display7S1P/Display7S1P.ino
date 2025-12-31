int a=12;
int b=13;
int c=8;
int d=7;
int e=6;
int f=11;
int g=10;
int h=9;
int l0[6]={a,b,c,d,e,f};
int l1[2]={b,c};
int l2[5]={a,b,g,e,d};
int l3[5]={a,b,c,g,d};
int l4[4]={f,b,g,c};
int l5[5]={a,f,g,c,d};
int l6[5]={c,d,e,f,g};
int l7[3]={a,b,c};
int l8[7]={a,b,c,d,e,f,g};
int l9[5]={a,b,c,f,g};
int i;
int t[8]={a,b,c,d,e,f,g,h};
int tiempo=750;
void setup(){ 
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(h, OUTPUT);
}
void loop() {
  apagar();
  cero();
  uno();
  dos();
  tres();
  cuatro();
  cinco();
  seis();
  siete();
  ocho();
  nueve();
  ocho();
  siete();
  seis();
  cinco();
  cuatro();
  tres();
  dos();
  uno();
  cero();
}
void apagar(){
  for (i=0;i<sizeof(t)/2;i++){
    digitalWrite(t[i],HIGH);
  }
  delay(1); 
}
void cero(){
  for (i=0;i<sizeof(l0)/2;i=i+1){
    digitalWrite(l0[i],LOW);
  }
  delay(tiempo);
  apagar();
}
void uno(){
  for (i=0;i<sizeof(l1)/2;i=i+1){
    digitalWrite(l1[i],LOW);
  }
    delay(tiempo);
    apagar();
}
void dos(){
  for (i=0;i<sizeof(l2)/2;i=i+1){
    digitalWrite(l2[i],LOW);
  }
  delay(tiempo);
  apagar();
}
void tres(){
  for (i=0;i<sizeof(l3)/2;i=i+1){
    digitalWrite(l3[i],LOW);
  }
  delay(tiempo);
  apagar();
}
void cuatro(){
  for (i=0;i<sizeof(l4)/2;i=i+1){
    digitalWrite(l4[i],LOW);
  }
  delay(tiempo);
  apagar();
}
void cinco(){
  for (i=0;i<sizeof(l5)/2;i=i+1){
    digitalWrite(l5[i],LOW);
  }
  delay(tiempo);
  apagar();
}
void seis(){
  for (i=0;i<sizeof(l6)/2;i=i+1){
    digitalWrite(l6[i],LOW);
  }
  delay(tiempo);
  apagar();
}
void siete(){
  for (i=0;i<sizeof(l7)/2;i=i+1){
    digitalWrite(l7[i],LOW);
  }
  delay(tiempo);
  apagar();
}
void ocho(){
  for (i=0;i<sizeof(l8)/2;i=i+1){
    digitalWrite(l8[i],LOW);
  }
  delay(tiempo);
  apagar();
}
void nueve(){
  for (i=0;i<sizeof(l9)/2;i=i+1){
    digitalWrite(l9[i],LOW);
  }
  delay(tiempo);
  apagar();
}
