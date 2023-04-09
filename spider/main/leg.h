#ifndef Leg_h
#define Leg_h

#include <Servo.h>

class Leg {
  public:
    bool IsUpsideDown;
    int Pin_Up_Down;
    int Pin_Rotation;
    Servo servo_up_down;
    Servo servo_rotation;
    
    Leg(int pin_up_down, int pin_rotation, bool is_upside_down) {
      Pin_Up_Down = pin_up_down;
      Pin_Rotation = pin_rotation;
      IsUpsideDown = is_upside_down;
    }
    
    void Set() {
      servo_up_down.attach(Pin_Up_Down);
      servo_rotation.attach(Pin_Rotation);
    }
    
    void MoveUpDown(int angle) {
      if (IsUpsideDown) {
        angle = 180 - angle;
      }
      servo_up_down.write(angle);
    }
    
    void MoveRotation(int angle) {
      servo_rotation.write(angle);
    }
    
    void Flip() {
      IsUpsideDown = !IsUpsideDown;
    }
};

#endif
