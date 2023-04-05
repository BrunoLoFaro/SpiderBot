#ifndef Leg_h
#define Leg_h

#include <Servo.h>

class Leg {
  public:
    bool IsUpsideDown;
    int Pin;
    Servo servo;
    
    Leg(int pin, bool IsUpsideDown) {  // Constructor method
      Pin = pin;
      IsUpsideDown = IsUpsideDown;
    }
    
    void Set(){
          servo.attach(Pin);  // Attach the servo to the pin
    }

    void Move(int angle) {  // Method to move the leg to a specific angle
      if (IsUpsideDown) {
        angle = 180 - angle;  // Flip the angle if the leg is upside down
      }
      servo.write(angle);  // Move the servo to the specified angle
    }
    
    void Flip() {  // Method to flip the leg upside down
      IsUpsideDown = !IsUpsideDown;
    }
};

#endif