#include "motor_controller.h"

#include <math.h>

namespace lego_bot::motor_controller {

MotorController::MotorController(int leftMotor, int rightMotor)
  : leftMotor_(leftMotor), rightMotor_(rightMotor) {
}

void MotorController::moveForward(unsigned int movingDuration) {
  Serial.print("Move forward ");
  Serial.print(movingDuration);
  Serial.print(" seconds\n");

  leftMotor_.run(RELEASE);
  rightMotor_.run(RELEASE);

  leftMotor_.run(BACKWARD);
  leftMotor_.setSpeed(LEGO_MOTOR_SPEED);

  rightMotor_.run(BACKWARD);
  rightMotor_.setSpeed(LEGO_MOTOR_SPEED);

  delay(movingDuration);

  // Now turn off motor
  leftMotor_.run(RELEASE);
  rightMotor_.run(RELEASE);
}

void MotorController::moveBackward(unsigned int movingDuration) {
  Serial.print("Move backward ");
  Serial.print(movingDuration);
  Serial.print(" seconds\n");

  leftMotor_.run(RELEASE);
  rightMotor_.run(RELEASE);

  leftMotor_.run(FORWARD);
  leftMotor_.setSpeed(LEGO_MOTOR_SPEED);

  rightMotor_.run(FORWARD);
  rightMotor_.setSpeed(LEGO_MOTOR_SPEED);

  delay(movingDuration);

  // Now turn off motor
  leftMotor_.run(RELEASE);
  rightMotor_.run(RELEASE);
}

void MotorController::turnLeft(unsigned int movingDuration) {
  Serial.print("Turn right ");
  Serial.print(movingDuration);
  Serial.print(" seconds\n");

  leftMotor_.run(RELEASE);
  rightMotor_.run(RELEASE);

  leftMotor_.run(BACKWARD);
  leftMotor_.setSpeed(LEGO_MOTOR_SPEED);

  delay(movingDuration);

  // Now turn off motor
  leftMotor_.run(RELEASE);
  rightMotor_.run(RELEASE);
}

void MotorController::turnRight(unsigned int movingDuration) {
  Serial.print("Turn left ");
  Serial.print(movingDuration);
  Serial.print(" seconds\n");

  leftMotor_.run(RELEASE);
  rightMotor_.run(RELEASE);

  rightMotor_.run(BACKWARD);
  rightMotor_.setSpeed(LEGO_MOTOR_SPEED);

  delay(movingDuration);

  // Now turn off motor
  leftMotor_.run(RELEASE);
  rightMotor_.run(RELEASE);
}

} // lego_bot::motor_controller