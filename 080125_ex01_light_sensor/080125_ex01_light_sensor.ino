int ledPin = 11;
int sensorPin = A0;

int sensorValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); // LED OUT
  pinMode(sensorPin, INPUT); // Light sensor IN
}

void loop() {
  sensorValue = analogRead(sensorPin);

  Serial.println(sensorValue);

  int lightValue = map(sensorValue, 0, 1024, 0, 255);

  analogWrite(ledPin, constrain(lightValue, 0, 255));

/*
  // Hardcode to turn led on or off after a certain threshold

  if (sensorValue >= 500 && sensorValue <= 1024) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }*/

  delay(10);
}
