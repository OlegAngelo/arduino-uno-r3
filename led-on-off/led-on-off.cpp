#include <Arduino.h>

void setup()
{
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  int count = 0;

  while (count < 5)
  {
    digitalWrite(13, HIGH); // (PIN 13, LED turn on 5 volts)
    delay(500);
    digitalWrite(13, LOW); // (PIN 13, LED turn off)
    delay(500);

    count++;
  }

  while (count < 10)
  {
    digitalWrite(5, HIGH); // (PIN 5, LED turn on 5 volts)
    delay(500);
    digitalWrite(5, LOW); // (PIN 5, LED turn off)
    delay(500);

    count++;
  }

  while (count < 15)
  {
    digitalWrite(3, HIGH); // (PIN 3, LED turn on 5 volts)
    delay(500);
    digitalWrite(3, LOW); // (PIN 3, LED turn off)
    delay(500);

    count++;
  }

  delay(1000);
}

int main()
{
  init(); // Initializes the Arduino hardware.
  setup();
  while (true)
  {
    loop();
  }
  return 0;
}