#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial1.begin(115200);
  Serial1.println("Hello, Raspberry Pi Pico W!");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1); // this speeds up the simulation
}
