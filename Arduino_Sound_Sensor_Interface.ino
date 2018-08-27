const int ledPin = 12;
const int soundPin = 7;

int soundVal = 0;

void setup ()
{
  pinMode (ledPin, OUTPUT);
  pinMode (soundPin, INPUT);
}
 
void loop ()
{
  soundVal = digitalRead(soundPin);
  if (soundVal == LOW)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
}
