#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal_I2C.h>

OneWire ourWire(2);                 // Sensor en pin 2
DallasTemperature sensors(&ourWire);

LiquidCrystal_I2C lcd(0x3F, 16, 2);  // Si no funciona, prueba 0x27

void setup() {
  delay(1000);
  Serial.begin(9600);

  sensors.begin();

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print(" Temperatura ");
}

void loop() {

  sensors.requestTemperatures();
  float temperatura = sensors.getTempCByIndex(0);

  // Enviar por Serial (opcional)
  Serial.print("Temperatura = ");
  Serial.print(temperatura);
  Serial.println(" C");

  // Mostrar en LCD
  lcd.setCursor(0,1);
  lcd.print("Temp: ");
  lcd.print(temperatura, 1); // 1 decimal
  lcd.print(" C   ");        // espacios para borrar residuos

  delay(1000);
}
