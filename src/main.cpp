#include <esp32-hal-gpio.h>
#include "EAK.h"

EAK eak;

void setup() {
  // pinMode(18, OUTPUT);
  // pinMode(19, OUTPUT);
  // pinMode(21, OUTPUT);
  // pinMode(27, OUTPUT);
  eak.pinUsed(21);
  eak.pinUsed(26);
  eak.pinUsed(27);
  eak.pinUsed(32);
}

// Fungsi untuk memutar loop
void loop() {
  eak.ledOn(21);   // Menyalakan LED pada pin 18
  eak.ledOff(26);  // Mematikan LED pada pin 19
  eak.ledOn(27);   // Menyalakan LED pada pin 21
  eak.ledOff(32);  // Mematikan LED pada pin 27
  delay(100);  // Tunggu 100 milidetik
  eak.ledOff(21);  // Mematikan LED pada pin 18
  eak.ledOn(26);   // Menyalakan LED pada pin 19
  eak.ledOff(27);  // Mematikan LED pada pin 21
  eak.ledOn(32);   // Menyalakan LED pada pin 27
  delay(100);  // Tunggu 100 milidetik
}
