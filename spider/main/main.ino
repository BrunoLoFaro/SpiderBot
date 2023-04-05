#include "Spider.h"

Spider spider(9, 10, 11, 12, true);  // Instantiate a Spider object with four legs, all initially upside down

void setup() {
  spider.SetLegs();  // Attach servos to all legs
}

void loop() {
  // Move all legs from 0 to 180 degrees in steps of 10 degrees
  for (int i = 0; i <= 180; i += 10) {
    spider.leg1.Move(i);
    spider.leg2.Move(i);
    spider.leg3.Move(i);
    spider.leg4.Move(i);
    delay(50);
  }
  // Move all legs from 180 to 0 degrees in steps of 10 degrees
  for (int i = 180; i >= 0; i -= 10) {
    spider.leg1.Move(i);
    spider.leg2.Move(i);
    spider.leg3.Move(i);
    spider.leg4.Move(i);
    delay(50);
  }
  // Flip all legs upside down
  spider.leg1.Flip();
  spider.leg2.Flip();
  spider.leg3.Flip();
  spider.leg4.Flip();
  // Wait for 1 second before continuing
  delay(1000);
}
