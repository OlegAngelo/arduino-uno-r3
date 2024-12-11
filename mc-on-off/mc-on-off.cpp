#include <Arduino.h>

void setup()
{
    pinMode(13, OUTPUT);
}

void loop()
{
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1001);
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
