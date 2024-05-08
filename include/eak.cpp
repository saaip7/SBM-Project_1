#include <esp32-hal-gpio.h>
#include "EAK.h"

// Fungsi untuk menyalakan LED pada pin tertentu
void ledOn(int pin) {
  digitalWrite(pin, HIGH);
}

// Fungsi untuk mematikan LED pada pin tertentu
void ledOff(int pin) {
  digitalWrite(pin, LOW);
}

// Fungsi untuk menginisialisasi pin
void pinUsed(int pin) {
  pinMode(pin, OUTPUT);
}