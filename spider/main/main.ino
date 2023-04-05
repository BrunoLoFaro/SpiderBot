#include "Leg.h"
  Leg leg1(9, true);  // Instantiate the first leg object with pin 9
Leg leg2(10, false);  // Instantiate the second leg object with pin 10
void setup() {
  // Nothing to do here
    leg1.Set();  // Instantiate the first leg object with pin 9
    leg2.Set();  // Instantiate the second leg object with pin 10
}

void loop() {
    leg1.Move(50);
    delay(100);
    leg2.Move(50);
    delay(100);
    leg1.Move(70);
    delay(100);
    leg2.Move(70);
    delay(100);
}