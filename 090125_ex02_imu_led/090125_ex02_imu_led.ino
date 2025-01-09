#include <Adafruit_LSM6DS33.h>
#include <Adafruit_NeoPixel.h>

int yAxis = 0;
int LEDPin = 4;
int numOfPixels = 8;

Adafruit_NeoPixel pixels(numOfPixels, LEDPin, NEO_GRBW + NEO_KHZ800);
Adafruit_LSM6DS33 lsm6ds33;

void setup(void) {
  Serial.begin(115200);
  while (!Serial)
    delay(10);

  if (!lsm6ds33.begin_I2C()) {
    Serial.println("Failed to find LSM6DS33 chip");
    while (1) {
      delay(10);
    }
  }

  Serial.println("LSM6DS33 Found!");

  lsm6ds33.configInt1(false, false, true); // accelerometer DRDY on INT1
  lsm6ds33.configInt2(false, true, false); // gyro DRDY on INT2

  pixels.begin();
  pixels.setBrightness(20);
}

void loop() {
  pixels.clear();

  sensors_event_t accel;
  // sensors_event_t gyro;
  // sensors_event_t temp;

  lsm6ds33.getEvent(&accel, &gyro, &temp);

  yAxis = accel.acceleration.y;

  int lightPixels = map(yAxis, 10,-10,0,8);

  for(int i=0; i<= lightPixels; i++) {
    pixels.setPixelColor(i, pixels.Color(255, 255, 0, 0));

    pixels.show(); 
  }

  delay(1000);
}