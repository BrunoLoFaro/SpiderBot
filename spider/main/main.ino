#include "Leg.h"

// Define the pin numbers for the servos
int leg_pin_up_down = 9;
int leg_pin_rotation = 10;

// Create a Leg object
Leg leg(leg_pin_up_down, leg_pin_rotation, false);

void setup() {
  // Attach the servos to the pins
  leg.Set();
}

void loop() {
  // Move the leg up and down to a 90 degree angle
  leg.MoveUpDown(20);
  delay(500);
  leg.MoveRotation(60);

  delay(500);
    leg.MoveUpDown(60);
    delay(500);
    leg.MoveRotation(20);

  delay(1000);
}
