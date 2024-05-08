#include <esp32-hal-gpio.h>
#include "EAK.h"

EAK::EAK() {}
// Fungsi untuk menyalakan LED pada pin tertentu
void EAK::ledOn(int pin) {
  digitalWrite(pin, HIGH);
}

// Fungsi untuk mematikan LED pada pin tertentu
void EAK::ledOff(int pin) {
  digitalWrite(pin, LOW);
}

// Fungsi untuk menginisialisasi pin
void EAK::pinUsed(int pin) {
  pinMode(pin, OUTPUT);
}