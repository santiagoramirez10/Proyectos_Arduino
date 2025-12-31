const int PIN_SENSOR = 2;
const int PIN_BUZZER = 9;

void setup() {
  pinMode(PIN_SENSOR, INPUT);
  pinMode(PIN_BUZZER, OUTPUT);
}

void loop() {

  int lectura = digitalRead(PIN_SENSOR);

  // ahora:
  // HIGH = hay obstáculo
  // LOW  = no hay obstáculo

  if (lectura == HIGH) {
    digitalWrite(PIN_BUZZER, HIGH);   // Suena
  }
  else {
    digitalWrite(PIN_BUZZER,LOW);       // Silencio
  }

}
