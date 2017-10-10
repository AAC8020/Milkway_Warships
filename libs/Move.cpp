//Speed range:1~10
#pragma once
#include <Arduino.h>
#include "Warship.h"

void MoveForward(unsigned int speed, unsigned int distance);
void MoveBackward(unsigned int speed, unsigned int distance);
void LeftTurn(unsigned int speed, unsigned int angle);
void RightTurn(unsigned int speed, unsigned int angle);

void MoveForward(unsigned int speed, unsigned int distance)
{
	unsigned int pwmSpeed = 0;
	if (speed > 10)
	{
		Serial.println("Invalid speed: out of range(1~10).");
		return;
	}
	pwmSpeed = 25 * speed;
	//´ıÌí¼Ó
}
void MoveBackward(unsigned int speed, unsigned int distance)
{
	unsigned int pwmSpeed = 0;
	if (speed > 10)
	{
		Serial.println("Invalid speed: out of range(1~10).");
		return;
	}
	pwmSpeed = 255 / speed;
	//´ıÌí¼Ó
}