#include <Servo.h>

Servo myServo;

int potPin = A0;
int servoPin = 7;
int pos = 0;

void setup() {
  myServo.attach(servoPin);
  pinMode(potPin, INPUT);
}

void loop() {

  pos = map(analogRead(potPin), 0, 1023, 0, 180);

  myServo.write(pos);
  delay(15);

}
