#pragma once
//#includes
/*#include <Arduino.h>
#include "libs\Sensors.cpp"
#include "libs\init.cpp"*/
//Motor PWM Ports
#define __LFMOTOR__
#define __RFMOTOR__
#define __LBMOTOR__
#define __RBMOTOR__
//Servo PWM Ports
#define __DSRVO__
#define __HSERVO__
//Pump Control Port
#define __PUMP__
//Sensors
#define __USIN__
#define __USOUT__ //US: Ultrasonic ³¬Éù²¨
#define __IR1__
#define __IR2__
#define __IR3__
#define __IR4__


class IR
{
public:
	bool L1, L2, R1, R2;
};