#include <Servo.h>
#include <Adafruit_NeoPixel.h>

Servo myServo;

int potPin = A0;
int servoPin = 7;
int pos = 0;

int LEDPin = 12;
int numOfPixels = 8;

Adafruit_NeoPixel pixels(numOfPixels, LEDPin, NEO_GRBW + NEO_KHZ800);

void setup() {
  myServo.attach(servoPin);
  pinMode(potPin, INPUT);

  pixels.begin();
}

void loop() {
  pixels.clear();

  int potInput = analogRead(potPin);

  pos = map(potInput, 0, 1023, 0, 180);

  int lightPixels = map(potInput, 0, 1023, 0, 8);

  for(int i=0; i<= lightPixels; i++) {
    pixels.setPixelColor(i, pixels.Color(255, 255, 0, 0));

    pixels.show(); 
  }

  myServo.write(pos);

  delay(15);

}
