// Sketch básico para acender o laser

int ledPin = 8;

void setup ()
{
  pinMode(ledPin, OUTPUT);
}

void loop ()
{
digitalWrite(ledPin, HIGH);
}
