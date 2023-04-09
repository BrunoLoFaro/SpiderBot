#include "Leg.h"

class Spider {
  public:
    Leg leg1;
    Leg leg2;
    Leg leg3;
    Leg leg4;
    
Spider(int pin1_up_down, int pin1_rotation, bool isUpsideDown1,
       int pin2_up_down, int pin2_rotation, bool isUpsideDown2,
       int pin3_up_down, int pin3_rotation, bool isUpsideDown3,
       int pin4_up_down, int pin4_rotation, bool isUpsideDown4) :
      leg1(pin1_up_down, pin1_rotation, isUpsideDown1),
      leg2(pin2_up_down, pin2_rotation, isUpsideDown2),
      leg3(pin3_up_down, pin3_rotation, isUpsideDown3),
      leg4(pin4_up_down, pin4_rotation, isUpsideDown4) {}
    
    void SetLegs() {
      leg1.Set();
      leg2.Set();
      leg3.Set();
      leg4.Set();
    }
};
