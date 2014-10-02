int rLed = 11;
int gLed = 10;
int rState = HIGH;
int gState = LOW;

void setup()
{
  pinMode(rLed, OUTPUT);     
  pinMode(gLed, OUTPUT);
  digitalWrite(rLed, rState);
  digitalWrite(gLed, gState);
}

void loop()
{
  delay(1000);

  digitalWrite(rLed, rState = !rState);
  digitalWrite(gLed, gState = !gState);
}
