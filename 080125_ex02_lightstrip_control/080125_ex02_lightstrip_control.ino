#include <Adafruit_NeoPixel.h>

int potPin = A0;
int LEDPin = 6;
int numOfPixels = 8;

Adafruit_NeoPixel pixels(numOfPixels, LEDPin, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(9600);

  pinMode(potPin, INPUT);
  pinMode(LEDPin, OUTPUT);

  pixels.begin();
}

void loop() {
  pixels.clear();

  Serial.println(analogRead(potPin));

  int lightPixels = map(analogRead(potPin), 0, 1023, 0, 8);

  for(int i=0; i< lightPixels; i++) { // For each pixel...

    pixels.setPixelColor(i, pixels.Color(0, 150, 0));

    pixels.show(); 
  }
}
