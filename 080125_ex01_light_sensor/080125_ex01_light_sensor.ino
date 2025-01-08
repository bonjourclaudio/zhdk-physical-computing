int ledPin = 11;
int sensorPin = A0;

int sensorValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); // LED OUT
}

void loop() {
  sensorValue = analogRead(sensorPin);

  Serial.println(sensorValue);

  if (sensorValue >= 500 && sensorValue <= 1024) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(1000);
}
