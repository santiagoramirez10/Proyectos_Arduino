#include <Keypad.h>
#include <LiquidCrystal_I2C.h>
const byte Filas = 4;
const byte Columnas = 4;
byte Pines_Filas[] = {9, 8, 7, 6};
byte Pines_Columnas[] = {5, 4, 3, 2};
char Teclas[Filas][Columnas] ={
        {'1', '2', '3', 'A'},
        {'4', '5', '6', 'B'},
        {'7', '8', '9', 'C'},
        {'*', '0', '#', 'D'}};
Keypad teclado = Keypad(makeKeymap(Teclas), Pines_Filas, 
                Pines_Columnas, Filas, Columnas);
LiquidCrystal_I2C lcd(0x3F, 16, 2);
String claveIngresada = "";
String claveCorrecta = "1996";
String claveEncriptada = "";
void setup(){
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Ingrese su clave");
}
void loop(){
  char tecla = teclado.getKey();
  if (tecla){
    claveEncriptada += "*";
    if (tecla != '*'){
      lcd.setCursor(0, 1);
      lcd.print(claveEncriptada);
    }
    if (tecla == '*'){
      lcd.clear();
      if (claveIngresada == claveCorrecta){
        lcd.setCursor(0, 0);
        lcd.print("---Bienvenido---");
      }
      else{
        lcd.setCursor(0, 0);
        lcd.print("Acceso denegado");
        lcd.setCursor(0, 1);
        lcd.print("C para continuar");
      }
    }
    else{
      claveIngresada += tecla;
    }
  }
  if (tecla == 'C'){
    lcd.clear();
    claveIngresada = "";
    claveEncriptada = "";
    lcd.setCursor(0, 0);
    lcd.print("Ingrese su clave");
  }
}