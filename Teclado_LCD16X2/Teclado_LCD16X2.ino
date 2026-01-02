#include <Keypad.h>
#include <LiquidCrystal_I2C.h>

const byte Filas = 4;
const byte Columnas = 4;

byte Pines_Filas[]    = {9, 8, 7, 6};
byte Pines_Columnas[] = {5, 4, 3, 2};

char Teclas[Filas][Columnas] =
{
  {'1','2','3','A'},
  {'4','5','6','B'}, 
  {'7','8','9','C'},
  {'*','0','#','D'}
};

Keypad Teclado1 = Keypad(makeKeymap(Teclas), Pines_Filas, Pines_Columnas, Filas, Columnas);

LiquidCrystal_I2C lcd(0x3F, 16, 2);   // Cambiar a 0x27 si no aparece

void setup() {

  Serial.begin(9600);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("  TECLADO 4x4");
  lcd.setCursor(0,1);
  lcd.print("Pulsa una tecla");
}

void loop() {

  char tecla = Teclado1.getKey();

  if (tecla != 0) {

    Serial.print("Tecla: ");
    Serial.println(tecla);

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Tecla pulsada:");

    lcd.setCursor(7,1);
    lcd.print("   ");
    lcd.setCursor(7,1);
    lcd.print(tecla);
  }
}
