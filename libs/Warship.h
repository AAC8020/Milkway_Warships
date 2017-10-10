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
#define __IR1__
#define __IR2__
#define __IR3__
#define __IR4__


class IR
{
public:
	bool L1, L2, R1, R2;
};