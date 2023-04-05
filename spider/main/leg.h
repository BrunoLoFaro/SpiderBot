class Leg {
  public:
    bool IsUpsideDown;
    int UpDownPin;
    int RotatePin;
    Servo upDownServo;
    Servo rotateServo;
    
    Leg(int upDownPin, int rotatePin, bool isUpsideDown) : 
      UpDownPin(upDownPin), RotatePin(rotatePin), IsUpsideDown(isUpsideDown) {} // Constructor method
    
    void Set(){
      upDownServo.attach(UpDownPin);  // Attach the up/down servo to the pin
      rotateServo.attach(RotatePin); // Attach the rotate servo to the pin
    }

    void Move(int upDownAngle, int rotateAngle) {  // Method to move the leg to a specific up/down angle and rotate angle
      if (IsUpsideDown) {
        upDownAngle = 180 - upDownAngle;  // Flip the up/down angle if the leg is upside down
        rotateAngle = 180 - rotateAngle;  // Flip the rotate angle if the leg is upside down
      }
      upDownServo.write(upDownAngle);   // Move the up/down servo to the specified up/down angle
      rotateServo.write(rotateAngle);   // Move the rotate servo to the specified rotate angle
    }
    
    void Flip() {  // Method to flip the leg upside down
      IsUpsideDown = !IsUpsideDown;
    }
};
