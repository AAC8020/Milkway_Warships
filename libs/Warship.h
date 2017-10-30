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
<<<<<<< HEAD
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
=======
#define __USOUT__ //US: Ultrasonic ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
#define __IR1__ 1
#define __IR2__ 2
#define __IR3__ 3
#define __IR4__ 4
#define irtrue 1
#define irfalse 0
int ir1, ir2, ir3, ir4, irreturn;
>>>>>>> 648f7460a3a13a73ce1c4aafb3994901e68f2672
