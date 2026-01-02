#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2);   // 0x27 en algunos módulos
int sensorLluvia = 2;

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {

  int lectura = digitalRead(sensorLluvia);           // primero limpiamos
  if (lectura==LOW){
    lcd.clear(); 
      lcd.setCursor(0, 0);
  lcd.print("     ALERTA     ");
  lcd.setCursor(0, 1);
  lcd.print("Lluvia detectada");
  }
  else{
    lcd.clear(); 
  lcd.setCursor(0, 0);
  lcd.print("  No hay lluvia  ");
  lcd.setCursor(0, 1);
  }
  delay(1000);
}
