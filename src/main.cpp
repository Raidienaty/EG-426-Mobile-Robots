#define _USE_MATH_DEFINES

#include <mbed.h>
#include <math.h>
#include "Motion.h"
#include "Encoders.h"

Motion robo;

int main()
{
    DigitalOut rightSignal(LED1), leftSignal(LED2);
    leftSignal = 1;

    while (true)
    {
        robo.drive(0.5);
        ThisThread::sleep_for(10s);
        robo.stop();
    }
}