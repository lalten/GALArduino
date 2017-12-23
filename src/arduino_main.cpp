#include <Arduino.h>

void setup()
{
  // USB CDC Serial
  Serial.begin(115200);
}

void loop()
{
  Serial.println("Hello World");
  delay(500);
}
