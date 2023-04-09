#include "Spider.h"

// Pins for the servo motors
const int leg1_pin_up_down = 8;
const int leg1_pin_rotation = 2;
const int leg2_pin_up_down = 9;
const int leg2_pin_rotation = 3;
const int leg3_pin_up_down = 10;
const int leg3_pin_rotation = 4;
const int leg4_pin_up_down = 11;
const int leg4_pin_rotation = 5;

// Upside-down status for each leg
const bool leg1_is_upside_down = true;
const bool leg2_is_upside_down = false;
const bool leg3_is_upside_down = true;
const bool leg4_is_upside_down = false;

// Instantiate the spider with the leg pins and upside-down status
Spider spider(leg1_pin_up_down, leg1_pin_rotation, leg1_is_upside_down,
              leg2_pin_up_down, leg2_pin_rotation, leg2_is_upside_down,
              leg3_pin_up_down, leg3_pin_rotation, leg3_is_upside_down,
              leg4_pin_up_down, leg4_pin_rotation, leg4_is_upside_down);

void setup() {
  // Set up the legs
  spider.SetLegs();
}

void loop() {
  // make the spider walk
  spider.Walk(4)
  delay(2000);
}

