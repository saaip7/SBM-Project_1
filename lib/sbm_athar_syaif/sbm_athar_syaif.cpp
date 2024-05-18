#include "sbm_athar_syaif.h"
#include <esp32-hal-gpio.h>

// Fungsi untuk menginisialisasi pin
void pinUsed(int pin) {
  pinMode(pin, OUTPUT);
}

// Fungsi untuk menyalakan LED pada pin tertentu
void ledOn(int pin) {
  digitalWrite(pin, HIGH);
}

// Fungsi untuk mematikan LED pada pin tertentu
void ledOff(int pin) {
  digitalWrite(pin, LOW);
}

// Fungsi untuk menyalakan dan mematikan led sesuai dengan urutan parameter beserta delay tertentu
void sequence(int ledpin1, int ledpin2, int ledpin3, int ledpin4, int delaytime) {
  ledOff(ledpin1);
  ledOn(ledpin2);
  delay(delaytime);
  
  ledOff(ledpin2);
  ledOn(ledpin3);
  delay(delaytime);
  
  ledOff(ledpin3);
  ledOn(ledpin4); 
  delay(delaytime);
  
  ledOff(ledpin4);
  ledOn(ledpin1); 
  delay(delaytime);
}

// Fungsi untuk mendapatkan bacaan raw dari potensiometer
int potensio(int potPin) { 
    return analogRead(potPin);
}

// Fungsi untuk mendapatkan bacaan raw dari potensio yang sudah diskala dengan nilai min dan max
int potensio(int potPin, int minValue, int maxValue) { 
    int potValue = 0;
    float potTemp = 0;
    potTemp = analogRead(potPin);
    potTemp = potTemp/4095*(maxValue - minValue) + minValue;
    potValue = potTemp;
    
    return potValue;
}