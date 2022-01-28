/*
*   Author: Professor Stevenson
*   Script: Encoders.h
*   Modified by: Jack Canducci
*/

#ifndef Encoders_h
#define Encoders_h

#include <mbed.h>

#define     RIGHT_PIN       D4
#define     LEFT_PIN        D5

class Encoders
{
public:
    Encoders();

    int get_countA();
    int get_countB();
    void set_dirA(bool);
    void set_dirB(bool);

    static void ISR1();
    static void ISR2();

    void resetA();
    void resetB();
    void resetAll();
};

#endif