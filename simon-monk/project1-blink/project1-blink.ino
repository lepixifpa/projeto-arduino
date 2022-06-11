int led = 12;

// a função setup é executada assim que o arduino é ligado
void setup() {
  pinMode(led, OUTPUT);  // informa que o pino digital do led é de saída
}

// A funçã loop fica rodando indefinidamente
void loop() {
  digitalWrite(led, HIGH);  // liga o LED
  delay(1000);              // 1s de espera
  digitalWrite(led, LOW);   // desliga o LED
  delay(1000);              // 1s de espera
}
