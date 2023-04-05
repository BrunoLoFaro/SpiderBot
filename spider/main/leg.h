#ifndef Leg_h
#define Leg_h

#include <Servo.h>

class Leg {
  public:
    bool IsUpsideDown;
    int Pin;
    Servo UpDownServo;
    Servo RotationServo;  // New servo for rotating the leg
    
    Leg(int pin, bool isUpsideDown) {
      Pin = pin;
      IsUpsideDown = isUpsideDown;
    }
    
    void Set() {
      UpDownServo.attach(Pin);
      RotationServo.attach(Pin + 1);  // Attach the new servo to the next pin
    }

    void Move(int angle, int rotationAngle) {
      if (IsUpsideDown) {
        angle = 180 - angle;
      }
      UpDownServo.write(angle);
      RotationServo.write(rotationAngle);  // Move the new servo to the specified rotation angle
    }
    
    void Flip() {
      IsUpsideDown = !IsUpsideDown;
    }
};
#endif
