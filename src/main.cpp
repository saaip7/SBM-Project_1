#include "sbm_athar_syaif.h"

int potPin = 33;
int delayLED = 25;

void setup() {
  //inisialisasi pin yang akan digunakan
  
  pinUsed(21);
  pinUsed(26);
  pinUsed(27);
  pinUsed(32);
}

// Fungsi untuk memutar loop
void loop() {
  sequence(27, 32, 21, 26, potensio(potPin, 300, 0)+delayLED);
}
