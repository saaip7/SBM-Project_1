#include "sbm_athar_syaif.h"

int potPin = 33;

void setup() {
  pinUsed(21);
  pinUsed(26);
  pinUsed(27);
  pinUsed(32);
}

// Fungsi untuk memutar loop
void loop() {
  sequence(27, 32, 21, 26, potensioLED(potPin));
}
