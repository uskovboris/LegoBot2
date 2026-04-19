#include "sonar.h"

namespace lego_bot::sonar {

Sonar::Sonar(int triggerPin, int echoPin, int servoPin)
 : triggerPin_(triggerPin), echoPin_(echoPin)  {
  servo_.attach(servoPin);  

  pinMode(triggerPin_, OUTPUT);
  pinMode(echoPin_, INPUT);
}

unsigned int Sonar::getDistance() const {

  digitalWrite(triggerPin_, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin_, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin_, LOW);
  auto duration = pulseIn(echoPin_, HIGH);
  auto distance = 0.034 * duration / 2;

  return distance;
}

void Sonar::posServo(int servoPos) {
}

} // namespace lego_bot::sonar