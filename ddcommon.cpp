/* 1.1.0 VERSION */

#include <Arduino.h>
#include "ddcommon.h"

void writeToSerial(String msg, bool nl)
{
	if (SERIAL_ENABLED)
	{
		Serial.print(msg);
		if (nl)
			Serial.println();
	}
}

void writeToSerial(const char *msg, bool nl)
{
	if (SERIAL_ENABLED)
	{
		Serial.print(msg);
		if (nl)
			Serial.println();
	}
}

void writeToSerial(float msg, bool nl)
{
	if (SERIAL_ENABLED)
	{
		Serial.print(msg);
		if (nl)
			Serial.println();
	}
}

void writeToSerial(int msg, bool nl)
{
	if (SERIAL_ENABLED)
	{
		Serial.print(msg);
		if (nl)
			Serial.println();
	}
}

void writeToSerial(unsigned int msg, bool nl)
{
	if (SERIAL_ENABLED)
	{
		Serial.print(msg);
		if (nl)
			Serial.println();
	}
}

void writeToSerial(double msg, bool nl)
{
	if (SERIAL_ENABLED)
	{
		Serial.print(msg);
		if (nl)
			Serial.println();
	}
}

bool myDelay(uint32_t ms, unsigned long *startMillis)
{
	bool ret = true;
	unsigned long currentMillis = millis();
	if (currentMillis - *startMillis < ms)
		ret = false;
	else
		*startMillis = currentMillis;
	return ret;
}
