#ifndef EAK_H
#define EAK_H

class EAK{
    public:
        EAK();
        void ledOn(int pin);
        void ledOff(int pin);
        void pinUsed(int pin);
};

#endif