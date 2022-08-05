// Sketch para emitir sons através de dois buzzers
int buzzPin1 = 8;
int buzzPin2 = 7;

void setup ()
{
  pinMode(buzzPin1, OUTPUT);
  pinMode(buzzPin2, OUTPUT);
}

void loop ()
{
  tone(buzzPin1, 100); // tone(pino, frequência, duração) => liga o som
  delay(500);
  noTone(buzzPin1); // noTone(pino) => desliga o som
  delay(500);

  tone(buzzPin2, 500);
  delay(500);
  noTone(buzzPin2);
  delay(500);
}
