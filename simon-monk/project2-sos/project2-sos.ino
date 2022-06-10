int redLed = 12;
int shortPause = 300;
int longPause = 600;

void setup() {
  pinMode(redLed, OUTPUT);
}

void loop() {
  
  // S
  digitalWrite(redLed, HIGH);
  delay(shortPause);
  digitalWrite(redLed, LOW);
  delay(shortPause);
  digitalWrite(redLed, HIGH);
  delay(shortPause);
  digitalWrite(redLed, LOW);
  delay(shortPause);
  digitalWrite(redLed, HIGH);
  delay(shortPause);
  digitalWrite(redLed, LOW);
  delay(longPause);
  
  // O
  digitalWrite(redLed, HIGH);
  delay(longPause);
  digitalWrite(redLed, LOW);
  delay(longPause);
  digitalWrite(redLed, HIGH);
  delay(longPause);
  digitalWrite(redLed, LOW);
  delay(longPause);
  digitalWrite(redLed, HIGH);
  delay(longPause);
  digitalWrite(redLed, LOW);
  
  // S
  digitalWrite(redLed, HIGH);
  delay(shortPause);
  digitalWrite(redLed, LOW);
  delay(shortPause);
  digitalWrite(redLed, HIGH);
  delay(shortPause);
  digitalWrite(redLed, LOW);
  delay(shortPause);
  digitalWrite(redLed, HIGH);
  delay(shortPause);
  digitalWrite(redLed, LOW);
  delay(shortPause);
  digitalWrite(redLed, HIGH);
  delay(shortPause);
  digitalWrite(redLed, LOW);
  delay(2000);
  
}
