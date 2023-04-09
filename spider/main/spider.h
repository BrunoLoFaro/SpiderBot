#ifndef Spider_h
#define Spider_h

#include "Leg.h"

class Spider {
  public:
    Leg leg1;
    Leg leg2;
    Leg leg3;
    Leg leg4;
    
    Spider(int pin1_up_down, int pin1_rotation, bool is_upside_down1,
           int pin2_up_down, int pin2_rotation, bool is_upside_down2,
           int pin3_up_down, int pin3_rotation, bool is_upside_down3,
           int pin4_up_down, int pin4_rotation, bool is_upside_down4) : 
      leg1(pin1_up_down, pin1_rotation, is_upside_down1), 
      leg2(pin2_up_down, pin2_rotation, is_upside_down2),
      leg3(pin3_up_down, pin3_rotation, is_upside_down3), 
      leg4(pin4_up_down, pin4_rotation, is_upside_down4) {}
    
    void SetLegs() {
      leg1.Set();
      leg2.Set();
      leg3.Set();
      leg4.Set();
    }

    void Walk(int steps) {
      for (int i = 0; i < steps; i++) {
        // Move front right leg up and forward
        leg1.MoveUpDown(30);
        leg1.MoveRotation(30);
        delay(500);

        // Move front right leg down
        leg1.MoveUpDown(90);
        leg1.MoveRotation(90);
        delay(500);

        // Move back left leg up and forward
        leg3.MoveUpDown(30);
        leg3.MoveRotation(30);
        delay(500);

        // Move back left leg down
        leg3.MoveUpDown(90);
        leg3.MoveRotation(90);
        delay(500);

        // Move front right leg back
        leg1.MoveUpDown(60);
        leg1.MoveRotation(60);
        delay(500);

        // Move back left leg back
        leg3.MoveUpDown(60);
        leg3.MoveRotation(60);
        delay(500);

        // Move front left leg up and forward
        leg2.MoveUpDown(30);
        leg2.MoveRotation(30);
        delay(500);

        // Move front right leg down
        leg1.MoveUpDown(90);
        leg1.MoveRotation(90);
        delay(500);

        // Move back right leg up and forward
        leg4.MoveUpDown(30);
        leg4.MoveRotation(30);
        delay(500);

        // Move back right leg down
        leg4.MoveUpDown(90);
        leg4.MoveRotation(90);
        delay(500);

        // Move front left leg back
        leg2.MoveUpDown(60);
        leg2.MoveRotation(60);
        delay(500);

        // Move back right leg back
        leg4.MoveUpDown(60);
        leg4.MoveRotation(60);
        delay(500);
      }
    }
};

#endif
