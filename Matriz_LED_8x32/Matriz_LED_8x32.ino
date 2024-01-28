#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Max72xxPanel.h>
const int pinCS = 10;
const int numberOfHorizontalDisplays = 8;
const int numberOfVerticalDisplays = 1;
Max72xxPanel matrix = Max72xxPanel(pinCS, numberOfHorizontalDisplays, numberOfVerticalDisplays);
const int wait = 35;
const int spacer = 1;
const int width = 5 + spacer;
void setup(){
   Serial.begin(9600);
   matrix.setIntensity(8);
   matrix.setPosition(0, 0, 0);
   matrix.setPosition(1, 1, 0);
   matrix.setPosition(2, 2, 0);
   matrix.setPosition(3, 3, 0);
   matrix.setPosition(4, 4, 0);
   matrix.setPosition(5, 5, 0);
   matrix.setPosition(6, 6, 0);
   matrix.setPosition(7, 7, 0);
   matrix.setPosition(8, 8, 0); 
   matrix.setRotation(0, 1);   
   matrix.setRotation(1, 1);   
   matrix.setRotation(2, 1);    
   matrix.setRotation(3, 1);    
   matrix.setRotation(4, 1);    
   matrix.setRotation(5, 1);    
   matrix.setRotation(6, 1);    
   matrix.setRotation(7, 1);    
   matrix.setRotation(8, 1);    
}
void loop(){
   String cadena = "Feliz navidad para todos";
   long int time = millis();
   while(Serial.available()){
      cadena += char(Serial.read());
   }
   for(int i = 0; i < width * cadena.length() + matrix.width() - 1 - spacer; i++){
      matrix.fillScreen(LOW);
      int letter = i / width;
      int x = (matrix.width() - 1) - i % width;
      int y = (matrix.height() - 8) / 2;
      while(x + width - spacer >= 0 && letter >= 0){
         if(letter < cadena.length()){
             matrix.drawChar(x, y, cadena[letter], HIGH, LOW, 1);
         }
         letter--;
         x -= width;
      }
      matrix.write();
      delay(wait);
   }
}