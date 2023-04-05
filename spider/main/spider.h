#include "Leg.h"

class Spider {
  public:
    Leg leg1;
    Leg leg2;
    Leg leg3;
    Leg leg4;
    
    Spider(int pin1, int pin2, int pin3, int pin4, bool isUpsideDown) : 
      leg1(pin1, isUpsideDown), leg2(pin2, isUpsideDown), 
      leg3(pin3, isUpsideDown), leg4(pin4, isUpsideDown) {}
    
    void SetLegs() {
      leg1.Set();
      leg2.Set();
      leg3.Set();
      leg4.Set();
    }
};
