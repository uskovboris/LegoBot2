#include "motor_controller.h"
#include "sonar.h"

const int MOTOR_LEFT = 1;
const int MOTOR_RIGHT = 2;

lego_bot::motor_controller::MotorController motorController_(MOTOR_LEFT, MOTOR_RIGHT);

void setup() {

  Serial.begin(9600);
}

void loop() {
  motorController_.moveForward(1000);
  motorController_.turnLeft(10000); 
  motorController_.moveBackward(1000);  
  motorController_.turnRight(10000);
}
  