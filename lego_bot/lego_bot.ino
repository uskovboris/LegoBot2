#include "motor_controller.h"
#include "sonar.h"

const int MOTOR_LEFT = 1;
const int MOTOR_RIGHT = 2;

const int HC_SR04_ECHO_PIN = 2;
const int HC_SR04_TRIG_PIN = 13;

lego_bot::motor_controller::MotorController motorController_(MOTOR_LEFT, MOTOR_RIGHT);

lego_bot::sonar::Sonar sonar_(HC_SR04_TRIG_PIN, HC_SR04_ECHO_PIN, 1);

void setup() {

  Serial.begin(9600);
}

void loop() {
  // motorController_.moveForward(1000);
  // motorController_.turnLeft(10000); 
  // motorController_.moveBackward(1000);  
  // motorController_.turnRight(10000);

  delay(50);

  Serial.print("Sonar distance: ");
  Serial.print(sonar_.getDistance());
  Serial.print("\n");
}
  