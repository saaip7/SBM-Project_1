#include "sbm_athar_syaif.h"
#include <esp32-hal-gpio.h>


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

void sequence(int ledpin1, int ledpin2, int ledpin3, int ledpin4, int delaytime) {
  ledOff(ledpin1);
  ledOn(ledpin2);  // Menyalakan LED pada pin 18
  delay(delaytime);
  
  ledOff(ledpin2);
  ledOn(ledpin3);  // Mematikan LED pada pin 19
  delay(delaytime);
  
  ledOff(ledpin3);
  ledOn(ledpin4);   // Menyalakan LED pada pin 21
  delay(delaytime);
  
  ledOff(ledpin4);
  ledOn(ledpin1);  // Mematikan LED pada pin 27
  delay(delaytime);
}

int potensioLED(int potPin) {
    int potValue = 0;
    float potTemp = 0;
    potTemp = analogRead(potPin);
    potTemp = 320 - potTemp/4095*300 + 20;
    potValue = potTemp;
    
    return potValue;
}