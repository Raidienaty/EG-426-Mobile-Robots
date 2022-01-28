/*
*   Author: Professor Stevenson
*   Script: Motion.cpp
*   Purpose: Handle all motion for the robot
*   Modified by: Jack Canducci
*/

#include "Motion.h"

PwmOut leftMotor(LEFT_PIN);
PwmOut rightMotor(RIGHT_PIN);

DigitalOut LCTRL1(MOTOR_A_1_PIN);
DigitalOut LCTRL2(MOTOR_A_2_PIN);
DigitalOut RCTRL1(MOTOR_B_1_PIN);
DigitalOut RCTRL2(MOTOR_B_2_PIN);

void Motion::stop()
{
    leftStop();
    rightStop();
}

void Motion::drive()
{
    leftFWD();
    rightFWD();
}

void Motion::drive(float speed)
{
    float mspeed;
    mspeed = speed;

    leftFWD(mspeed);
    rightFWD(mspeed);
}

void Motion::reverse()
{
    leftREV();
    rightREV();
}

void Motion::reverse(float speed)
{
    float mspeed;
    mspeed = speed;

    leftREV(mspeed);
    rightREV(mspeed);
}

void Motion::turnLeft()
{
    leftREV();
    rightFWD();
}

void Motion::turnLeft(float speed)
{
    float mspeed;
    mspeed = speed;

    leftREV(mspeed);
    rightFWD(mspeed);
}

void Motion::turnRight()
{
    leftFWD();
    rightREV();
}

void Motion::turnRight(float speed)
{
    float mspeed;
    mspeed = speed;
    
    leftFWD(mspeed);
    rightREV(mspeed);
}

//Functions used to build Motor function
//Control individual motors (left & right)

void Motion::leftStop()
{
    LCTRL1 = LOW;
    LCTRL2 = LOW;
    leftMotor = 0;
}

void Motion::rightStop()
{
    RCTRL1 = LOW;
    RCTRL2 = LOW;
    rightMotor = 0;
}

void Motion::leftFWD()
{
    LCTRL1 = HIGH;
    LCTRL2 = LOW;
    leftMotor = DEFAULT_SPEED;
}

void Motion::leftFWD(float speed)
{
    LCTRL1 = HIGH;
    LCTRL2 = LOW;
    leftMotor = speed;
}

void Motion::rightFWD()
{
    RCTRL1 = HIGH;
    RCTRL2 = LOW;
    rightMotor = DEFAULT_SPEED;
}

void Motion::rightFWD(float speed)
{
    RCTRL1 = HIGH;
    RCTRL2 = LOW;
    rightMotor = speed;
}

void Motion::leftREV()
{
    LCTRL1 = LOW;
    LCTRL2 = HIGH;
    leftMotor = DEFAULT_SPEED;
}

void Motion::leftREV(float speed)
{
    LCTRL1 = LOW;
    LCTRL2 = HIGH;
    leftMotor = speed;
}

void Motion::rightREV()
{
    RCTRL1 = LOW;
    RCTRL2 = HIGH;
    rightMotor = DEFAULT_SPEED;
}

void Motion::rightREV(float speed)
{
    RCTRL1 = LOW;
    RCTRL2 = HIGH;
    rightMotor = speed;
}

Motion::Motion()
{
    leftMotor.period(PWM_PERIOD);
    rightMotor.period(PWM_PERIOD);
}