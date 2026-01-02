#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2);   // Usa 0x27 si no aparece
int pot = A0;

void setup() {

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Potenciometro");
}

void loop() {

  int lectura = analogRead(pot);   // Valor de 0 a 1023

  lcd.setCursor(0,1);
  lcd.print("Valor: ");
  lcd.print(lectura);
  lcd.print("   ");   // espacios para borrar residuos

  delay(500);
}
