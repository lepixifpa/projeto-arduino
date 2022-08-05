int buzzPin1 = 8;
int buzzPin2 = 7;

void setup ()
{
  pinMode(buzzPin1, OUTPUT);
  pinMode(buzzPin2, OUTPUT);
}
void loop ()
{
  tone(buzzPin1, 100);
  delay(500);
  noTone(buzzPin1);
  delay(500);

  tone(buzzPin2, 500);
  delay(500);
  noTone(buzzPin2);
  delay(500);
}
