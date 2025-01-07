int ledPin = 11;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  Serial.begin(9600);

  // S
  morse(3, ledPin, 1);

  // O
  morse(3, ledPin, 0);

  // S
  morse(3, ledPin, 1);
}

/*
  MORSE
  ---
  freq: how many times to blink
  led: led pin
  duration: 0 = long; 1 = short
*/
void morse(int freq, uint8_t led, int duration) {

for (int i = 0; i < freq; i++) {
  // Long
  if (duration == 0) {
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);

  } else if (duration == 1) {
    // Short
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
  }
  }
}
