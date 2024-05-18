#ifndef SBM_ATHAR_SYAIF_H
#define SBM_ATHAR_SYAIF_H


void ledOn(int pin);
void ledOff(int pin);
void pinUsed(int pin);
void sequence(int ledpin1, int ledpin2, int ledpin3, int ledpin4, int interval);
void jeda(int ms);
int potensioLED(int potPin);

#endif