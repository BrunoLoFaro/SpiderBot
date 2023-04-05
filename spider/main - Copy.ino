#include <Servo.h>

Servo front_left_Servo; // servo controller (multiple can exist)
Servo front_right_Servo;
Servo back_left_Servo;
Servo back_right_Servo;

Servo front_mid_left_Servo;
Servo front_mid_right_Servo;
Servo back_mid_left_Servo;
Servo back_mid_right_Servo;

int front_left_ServoPin = 8; // PWM pin for servo control
int front_right_ServoPin = 9;
int back_left_ServoPin = 10;
int back_right_ServoPin = 11;

int front_mid_left_ServoPin = 3;
int front_mid_right_ServoPin = 4;
int back_mid_left_ServoPin = 6;
int back_mid_right_ServoPin = 7;

int pos = 20;    // servo starting position

void setup() {
  Serial.begin(9600); // start serial monitor
  delay(1000);
  front_left_Servo.write(20);
  front_left_Servo.attach(8); // start servo control
    delay(1000);
    front_right_Servo.write(20);
  front_right_Servo.attach(9);
    delay(1000);
        back_left_Servo.write(20);
  back_left_Servo.attach(10);
    delay(1000);
            back_right_Servo.write(20);
  back_right_Servo.attach(11);
  delay(1000);
              front_mid_left_Servo.write(20);
  front_mid_left_Servo.attach(3);
    delay(1000);
                  front_mid_right_Servo.write(20);
  front_mid_right_Servo.attach(4);
    delay(1000);
                      back_mid_left_Servo.write(20);
  back_mid_left_Servo.attach(6);
    delay(1000);
                          back_mid_right_Servo.write(20);
  back_mid_right_Servo.attach(7);
}

void loop() {
  reset();
}

void squat(){
  delay(1000);
  front_left_Servo.write(50);
  delay(1000);
  front_left_Servo.write(80);
}
void reset(){
  delay(500);
  front_left_Servo.write(20);
  delay(500);
  front_right_Servo.write(20);
  delay(500);
  back_left_Servo.write(20);
  delay(500);
  back_right_Servo.write(20);
  delay(500);
  front_mid_left_Servo.write(20);
  delay(500);
  front_mid_right_Servo.write(20);
  delay(500);
  back_mid_left_Servo.write(20);
  delay(500);
  back_mid_right_Servo.write(20);
}