#include <Adafruit_NeoPixel.h>

int potPin = A0;
int LEDPin = 6;
int numOfPixels = 8;

// Adapt 3rd parameter based on the LED strip. Options:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)

Adafruit_NeoPixel pixels(numOfPixels, LEDPin, NEO_GRBW + NEO_KHZ800);

void setup() {
  Serial.begin(9600);

  pinMode(potPin, INPUT);

  pixels.begin();
}

void loop() {
  pixels.clear();
  pixels.setBrightness(10);

  Serial.println(analogRead(potPin));

  int lightPixels = map(analogRead(potPin), 0, 1023, 0, 8);

  for(int i=0; i<= lightPixels; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 150, 150, 0));

    pixels.show(); 
  }
}
