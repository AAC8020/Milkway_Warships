#pragma once
//#includes
/*#include <Arduino.h>
#include "libs\Sensors.cpp"
#include "libs\init.cpp"*/
//Motor PWM Ports
#define __LFMOTOR__    //Left Front Motor
#define __RFMOTOR__
#define __LBMOTOR__
#define __RBMOTOR__    //Right Back Motor
//Servo PWM Ports
#define __DSRVO__    //Direction Servo
#define __HSERVO__    //Height Servo
//Pump Control Port
#define __PUMP__    //Air Pump
//Sensors
#define __USIN__
#define __USOUT__ //US: Ultrasonic ������
#define __IR1__ 1
#define __IR2__ 2
#define __IR3__ 3
#define __IR4__ 4
#define irtrue 1
#define irfalse 0
int ir1, ir2, ir3, ir4, irreturn;
