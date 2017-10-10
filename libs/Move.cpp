//Speed range:1~10
#pragma once
#include <Arduino.h>
#include "Warship.h"

void MoveForward(unsigned int speed, unsigned int distance);
void MoveBackward(unsigned int speed, unsigned int distance);
void LeftTurn(unsigned int speed, unsigned int angle);
void RightTurn(unsigned int speed, unsigned int angle);
int moveAlongLine(void);

void MoveForward(unsigned int speed, unsigned int distance)
{
	unsigned int pwmSpeed = 0;
	if (speed > 10)
	{
		Serial.println("Invalid speed: out of range(1~10).");
		return;   
	}
	pwmSpeed = 25 * speed;
	//add more code here
}
void MoveBackward(unsigned int speed, unsigned int distance)
{
	unsigned int pwmSpeed = 0;
	if (speed > 10)
	{
		Serial.println("Invalid speed: out of range(1~10).");
		return;
	}
	pwmSpeed = 25 * speed;
	//add more code here
}
int moveAlongLine(void)
{
	IR *irdata = new IR;
	irdata = IRDetect(irdata);
	//add more code here
	delete irdata;
}