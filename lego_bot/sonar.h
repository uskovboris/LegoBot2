#pragma once

#include <Servo.h>

namespace lego_bot::sonar {

class Sonar {
public:
  Sonar(int triggerPin, int echoPin, int servoPin);

  unsigned int getDistance() const;
  void posServo(int pos);

private:
  int triggerPin_;
  int echoPin_;

  Servo servo_;
};

} // namespace lego_bot::sonar