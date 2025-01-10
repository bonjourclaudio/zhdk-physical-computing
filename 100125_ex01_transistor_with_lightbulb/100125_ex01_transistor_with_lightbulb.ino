int lightPin = 11;

int currentVal = 0;
int step = 5;

int brightMin = 0;
int brightMax = 255;

void setup() {
  pinMode(lightPin, INPUT);
}

void loop() {

  // Simply turn it on
  // digitalWrite(lightPin, HIGH);

  // DIM LAMP
  analogWrite(lightPin, currentVal);

  currentVal = currentVal + step;

  if (currentVal <= brightMin || currentVal >= brightMax) {
    step = -step;
  }

  delay(50);

}
