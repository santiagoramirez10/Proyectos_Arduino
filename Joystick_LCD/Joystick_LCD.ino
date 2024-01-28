#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F,16,2);
int X;
int Y;
int pulsador = 10;
void setup(){
  Serial.begin(9600);
  pinMode(PULSADOR, INPUT);
  lcd.init();
  lcd.backlight();
}
void loop(){
  lcd.clear();
  X = analogRead(A0);
  Y = analogRead(A1);
  lcd.setCursor(0,0);
  lcd.print("X: ");
  lcd.setCursor(0,1);
  lcd.print("Y: ");
  Serial.println(Y);
  lcd.setCursor(3,0);
  if (X<150){
    lcd.print("Izquierda");
  }
    if (X>850){
    lcd.print("Derecha");
  }
  if(X>400 && X<550){
    lcd.print("Centro");
  }
  lcd.setCursor(3,1);
    if (Y<150){
    lcd.print("Abajo");
  }
    if (Y>850){
    lcd.print("Arriba");
  }
  if(Y>400 && Y<550){
    lcd.print("Centro");
  }
  delay(1000);
}