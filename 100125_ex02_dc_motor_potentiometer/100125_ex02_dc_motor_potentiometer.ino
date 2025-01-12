int digitalPin = 11;
int potPin = A0;

int currentVal = 0;
int step = 5;

int minSpeed = 0;
int maxSpeed = 255;

void setup() {
  pinMode(digitalPin, INPUT);
  pinMode(potPin, INPUT);
}

void loop() {
  int potRawValue = map(analogRead(potPin), 0, 1023, minSpeed, maxSpeed);
  analogWrite(digitalPin, potRawValue);



  delay(50);

}
