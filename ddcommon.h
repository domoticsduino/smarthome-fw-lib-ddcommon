/* 1.1.0 VERSION */

#ifndef ddcommon_h
#define ddcommon_h

#include <Arduino.h>

#define SERIAL_ENABLED false

void writeToSerial(String, bool);

void writeToSerial(const char *, bool);

void writeToSerial(float, bool);

void writeToSerial(int, bool);

void writeToSerial(unsigned int, bool);

void writeToSerial(double, bool);

#endif