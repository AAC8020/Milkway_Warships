#pragma once
#include <Arduino.h>
#include "Warship.h"

void initSensors(void);
void initMotors(void);
void initServos(void);
void initComm(void);
void initAll(void);

void initComm(void)
{
	Serial.begin(9600);
	pinMode(LED_BUILTIN, OUTPUT);
	for (int i = 0; i <= 2; i++)
	{
		digitalWrite(LED_BUILTIN, HIGH);
		delay(700);
		digitalWrite(LED_BUILTIN, LOW);
		delay(300);
	}
	delay(3000);
	Serial.println("Serial write test.....");
	Serial.println("Serial test complete");
}
void initAll(void)
{
	initComm();
	//initSensors();
	//initMotors();
	//initServos();
	digitalWrite(LED_BUILTIN, HIGH);
	Serial.println("Initialization complete, ready to go.");
	return;
}