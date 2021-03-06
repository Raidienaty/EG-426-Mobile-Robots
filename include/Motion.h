/*
*   Author: Professor Stevenson
*   Script: Motion.h
*   Purpose: Handle all motion for the robot
*   Modified by: Jack Canducci
*/

#ifndef Motion_h
#define Motion_h

#include <mbed.h>

#define     DEFAULT_SPEED       0.5
#define     LOW                 0
#define     HIGH                1
#define     PWM_PERIOD          0.01
#define     LEFT_PIN            PTE20
#define     RIGHT_PIN           PTE31
#define     MOTOR_A_1_PIN       PTC6
#define     MOTOR_A_2_PIN       PTC5
#define     MOTOR_B_1_PIN       PTC12
#define     MOTOR_B_2_PIN       PTC13

class Motion
{
public:
    Motion();

    void stop();
    void leftStop();
    void rightStop();
    void drive();
    void drive(float);
    void reverse();
    void reverse(float);
    void turnLeft();
    void turnLeft(float);
    void turnRight();
    void turnRight(float);
    void leftFWD();
    void leftFWD(float);
    void rightFWD();
    void rightFWD(float);
    void leftREV();
    void leftREV(float);
    void rightREV();
    void rightREV(float);
};

#endif