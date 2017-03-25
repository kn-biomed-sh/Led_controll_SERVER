#include <wiringPi.h>
#include <softPwm.h>
#include "LedON.h"

void init()
{
	wiringPiSetup();
	pinMode(0, OUTPUT);
	pinMode(1, OUTPUT);
	softPwmCreate(0, 0, 10);
	softPwmCreate(1, 0, 10);
	digitalWrite(0, LOW);
	digitalWrite(1, LOW);
}

void Led_One(signed char PWM_value)
{
	softPwmWrite(0, 0);
	softPwmWrite(1, PWM_value);
}
