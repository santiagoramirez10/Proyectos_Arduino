#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2);   // 0x27 en algunos módulos
int panelSolar = A0;

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {

  int lectura = analogRead(panelSolar);
  float voltaje = (lectura * 5.0) / 1023.0;

  lcd.clear();              // primero limpiamos
  lcd.setCursor(0, 0);
  lcd.print("Voltaje Panel:");
  lcd.setCursor(0, 1);
  lcd.print(voltaje, 2);    // 2 decimales
  lcd.print("V");

  delay(1000);
}
