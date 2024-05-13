#ifndef EAK_H
#define EAK_H

class EAK{
    public:
        EAK();
        void ledOn(int pin);
        void ledOff(int pin);
        void pinUsed(int pin);
        void sequence(int ledpin1, int ledpin2, int ledpin3, int ledpin4, int delay);
};

#endif