# Physical Computing | ZHdK IAD 2024 | Claudio Weckherlin
Introduction, TBD

**Table Of Contents**
- [Physical Computing | ZHdK IAD 2024 | Claudio Weckherlin](#physical-computing---zhdk-iad-2024---claudio-weckherlin)
  * [07.01.2025](#07012025)
    + [00 introduction](#00-introduction)
    + [01 - LED BLINK](#01---led-blink)
    + [02 - SOS](#02---sos)
    + [03 - PWM Fading LED](#03---pwm-fading-led)
    + [04 - Digital Input](#04---digital-input)
  * [08.01.2025](#08012025)
    + [01 - Light Sensor](#01---light-sensor)

## 07.01.2025

### 00 introduction
TBD

### 01 - LED BLINK
TBD

### 02 - SOS
TBD

### 03 - PWM Fading LED
TBD

### 04 - Digital Input
By simply connecting a jumper wire to a digital input (e.g. "11") and reading it's value through digitalRead(), it's value can be printed to the Serial Monitor. 

Some experiments we've done using the other side of the cable:
* Other side hangs in the air -> prints "0"
* Plug into 5v / 3v -> prints "1"
* Hold the cable / other side in the hand -> alternating between "0" and "1" -> acts like an antenna
* Plug into GND -> prints "0"

Negative Logik -> PullUp Resistor -> Release goes to positive
Positive Logik -> PullDown Resistor -> Release goes to negative

Exercise: Combine the two circuits to create an led you can turn on with your switch

## 08.01.2025

### 01 - Light Sensor
TBD

### 02 - Lightstrip Control
TBD
Important -> make sure to define the correct driver of the LED

