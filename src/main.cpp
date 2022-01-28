#define _USE_MATH_DEFINES

#include <mbed.h>
#include <math.h>
#include "Motion.h"
#include "Encoders.h"

// Robot controller
Motion robot;

int main()
{
    DigitalOut rightSignal(LED1), leftSignal(LED2);
    leftSignal = 1;

    while (true)
    {
        // Sets our robot to drive forward at 0.5 power
        robot.drive(0.5);
        // Sleep function for 10 seconds
        ThisThread::sleep_for(10s);
        // Stops the robot entirely
        robot.stop();
    }
}