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
