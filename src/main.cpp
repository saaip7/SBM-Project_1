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
  eaktemp = eaktemp/4095*300 + 20;
  eakvalue = eaktemp;
  eak.ledOff(32);
  eak.ledOn(21);  // Menyalakan LED pada pin 18
  delay(eakvalue);
  eaktemp = analogRead(eakpotpin);
  eak.ledOff(21);
  eak.ledOn(26);  // Mematikan LED pada pin 19
  delay(eakvalue);
  eaktemp = analogRead(eakpotpin);
  eak.ledOff(26);
  eak.ledOn(27);   // Menyalakan LED pada pin 21
  delay(eakvalue);
  eaktemp = analogRead(eakpotpin);
  eak.ledOff(27);
  eak.ledOn(32);  // Mematikan LED pada pin 27
  delay(eakvalue);

  

}
