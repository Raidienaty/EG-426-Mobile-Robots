/*
*   Author: Professor Stevenson
*   Script: Encoders.h
*   Modified by: Jack Canducci
*/

#include "Encoders.h"

InterruptIn motorRight(RIGHT_PIN);
InterruptIn motorLeft(LEFT_PIN);

// Since the following variables are used in the static
// functions they have to be defined as globals.
int countA;
int countB;

bool dirA;
bool dirB;

int Encoders::get_countA()
{
    return countA;
}

int Encoders::get_countB()
{
    return countB;
}
void Encoders::set_dirA(bool A)
{
    dirA = A;
}

void Encoders::set_dirB(bool B)
{
    dirB = B;
}

// Static Method
void Encoders::ISR1()
{
    if(dirA)
    {
        countA++;
    }
    else
    {
        countB--;
    }

}

// Static Method
void Encoders::ISR2()
{
    if(dirB)
    {
        countB++;
    }
    else
    {
        countA--;
    }
}

void Encoders::resetA()
{
    countA = 0;
}

void Encoders::resetB()
{
    countB = 0;
}

void Encoders::resetAll()
{
    resetA();
    resetB();
}

Encoders::Encoders()
{
    countA = 0;
    countB = 0;

    dirA = true;
    dirB = true;

    motorRight.mode(PullUp);
    motorLeft.mode(PullUp);

    motorRight.rise(&ISR1);
    motorLeft.rise(&ISR2);
}