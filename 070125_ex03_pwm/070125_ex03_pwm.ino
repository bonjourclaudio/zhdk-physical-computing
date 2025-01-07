/*

  **PWM**
  pins on marked with "~" on the arduino

  use analogWrite() function to communicate values in 8bit
  -> 0 until 255

*/
int ledPin = 11;

int currentVal = 0;
int step = 5;

int brightMin = 0;
int brightMax = 255;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {

  analogWrite(ledPin, currentVal);

  currentVal = currentVal + step;

  if (currentVal <= brightMin || currentVal >= brightMax) {
    step = -step;
  }

  delay(50);

}

