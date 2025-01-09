#include <Servo.h>

Servo myServo;

int servoPin = 7;
int pos = 0;

void setup() {
  myServo.attach(servoPin);
}

void loop() {

  for (pos = 0; pos <= 180; pos++) {
    myServo.write(pos);
    delay(15);
  }

  for (pos = 180; pos >= 180; pos--) {
    myServo.write(pos);
    delay(15);
  }

}
