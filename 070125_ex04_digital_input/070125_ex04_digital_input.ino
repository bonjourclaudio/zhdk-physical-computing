/*
  DIGITAL INPUT

  PULLDOWN, PULLUP

*/

void setup() {
  // Button IN
  pinMode(7, INPUT);

  // LED OUT
  pinMode(11, OUTPUT);


  Serial.begin(9600);

}

void loop() {
  int btnValue = digitalRead(7);

  switch (btnValue) {
    case 0:
    digitalWrite(11, LOW);
    break;

    case 1:
    digitalWrite(11, HIGH);
    break;
  }
}
