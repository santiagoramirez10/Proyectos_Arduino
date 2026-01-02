int LED_Rojo =6;
int LED_Verde=5; 
int LED_Azul=3;
void setup() {
pinMode(LED_Rojo,OUTPUT);//
pinMode(LED_Verde,OUTPUT);
pinMode(LED_Azul,OUTPUT);
}

void loop() {

  // Recorrido con pasos pequeños = degradado suave
  for (int h = 0; h < 768; h++) {
    ruedaColor(h);
    delay(10);   // baja a 5 si quieres aún más fluidez
  }

}
// Funcion tipo rueda de color (hue -> RGB)
void ruedaColor(int hue) {

  hue = hue % 768; // Recorrido completo

  int r, g, b;

  if (hue < 256) {          // Rojo -> Verde
    r = 255 - hue;
    g = hue;
    b = 0;
  }
  else if (hue < 512) {     // Verde -> Azul
    hue -= 256;
    r = 0;
    g = 255 - hue;
    b = hue;
  }
  else {                    // Azul -> Rojo
    hue -= 512;
    r = hue;
    g = 0;
    b = 255 - hue;
  }

  analogWrite(LED_Rojo,  r);
  analogWrite(LED_Verde, g);
  analogWrite(LED_Azul,  b);
}



