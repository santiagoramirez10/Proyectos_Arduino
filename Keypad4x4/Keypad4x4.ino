#include <Keypad.h>
const byte Filas =4;
const byte Columnas=4;
byte Pines_Filas[]={9,8,7,6};
byte Pines_Columnas[]={5,4,3,2};
char Teclas[Filas][Columnas]=
{
  {'1','2','3','A'},
  {'4','5','6','B'}, 
  {'7','8','9','C'},
  {'*','0','#','D'}
};
Keypad Teclado1=Keypad(makeKeymap(Teclas),Pines_Filas,Pines_Columnas,Filas,Columnas);                                                                        
void setup(){
Serial.begin(9600);
}
void loop(){  
char pulsacion = Teclado1.getKey();
if (pulsacion != 0)
  Serial.println(pulsacion);
}
