#pragma once

#include <AFMotor.h>

using Speed = uint8_t;

namespace lego_bot::motor_controller {

class MotorController {
public:
  MotorController(int leftMotor, int rightMotor);

  void moveForward(unsigned int movingDuration);
  void moveBackward(unsigned int movingDuration);

  void turnLeft(unsigned int movingDuration);
  void turnRight(unsigned int movingDuration);
private:
  static constexpr uint8_t LEGO_MOTOR_SPEED = 255;

  AF_DCMotor leftMotor_;
  AF_DCMotor rightMotor_;
};

} // lego_bot::motor_controller