
void setup()
{
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  if (analogRead(A0) >= 125) {
    digitalWrite(9, HIGH);
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(9, LOW);
    digitalWrite(13, LOW);
  }
  delay(10); }