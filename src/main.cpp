#include <esp32-hal-gpio.h>
#include "EAK.h"
#include <Arduino.h>

EAK eak;
int eakvalue = 0;
int eakpotpin = 33;
float eaktemp = 0;

void setup() {
  Serial.begin(9600);
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
  eaktemp = analogRead(eakpotpin);
  Serial.println(analogRead(eakpotpin));
  eaktemp = 320 - eaktemp/4095*300 + 20;
  eakvalue = eaktemp;
  eak.sequence(32, 21, 26, 27, eakvalue);
}
