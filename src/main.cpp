#include <Arduino.h>
#include <stdio.h>

// put function declarations here:

int main()
{
  Serial1.begin(115200);
  Serial.begin(115200);
  SerialUSB.begin(115200);
  pinMode(25, DEVICE_PORT_OUT);
  digitalWrite(25, 1);
  delay(500);
  digitalWrite(25, 0);
  delay(500);
  Serial1.print("Hello!!\nFirst test 1\n");
  Serial.print("Hello!!\nFirst test 0\n");
  SerialUSB.print("Hello!!\nFirst test u\n");
  while (true)
  {
    digitalWrite(25, 1);
    delay(500);
    digitalWrite(25, 0);
    delay(500);
  }
  return 0;
}