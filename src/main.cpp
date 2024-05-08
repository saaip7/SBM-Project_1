#include <esp32-hal-gpio.h>
#include "EAK.h"

void setup() {
  // initialize digital pin GPIO18 as an output.
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(27, OUTPUT);
}

// Fungsi untuk menyalakan LED pada pin tertentu
// void ledOn(int pin) {
//   digitalWrite(pin, HIGH);
// }

// Fungsi untuk mematikan LED pada pin tertentu
// void ledOff(int pin) {
//   digitalWrite(pin, LOW);
// }

// Fungsi untuk memutar loop
void loop() {
  ledOn(18);   // Menyalakan LED pada pin 18
  ledOff(19);  // Mematikan LED pada pin 19
  ledOn(21);   // Menyalakan LED pada pin 21
  ledOff(27);  // Mematikan LED pada pin 27
  delay(100);  // Tunggu 100 milidetik
  ledOff(18);  // Mematikan LED pada pin 18
  ledOn(19);   // Menyalakan LED pada pin 19
  ledOff(21);  // Mematikan LED pada pin 21
  ledOn(27);   // Menyalakan LED pada pin 27
  delay(100);  // Tunggu 100 milidetik
}
