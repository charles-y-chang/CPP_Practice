#include "Time.h"
#include<iomanip>
#include<stdexcept>
#include<iostream>
using namespace std;

Time::Time(int hr, int min, int sec)
{
	setTime(hr, min, sec);
}

Time& Time::setTime(int hr, int min , int sec)
{
	// TODO: 於此處插入傳回陳述式
	setHour(hr);
	setMinute(min);
	setSecond(sec);
	return *this; // enable cascading
}

Time& Time::setHour(int h)
{
	// TODO: 於此處插入傳回陳述式
	if (h >= 0 && h < 24)
		hour = h;
	else
		throw invalid_argument("hour must be 0-23");

	return *this;
}

Time& Time::setMinute(int m)
{
	// TODO: 於此處插入傳回陳述式
	if (m >= 0 && m < 60)
		minute=m;
	else
		throw invalid_argument("minute must be 0-59");

	return *this;
}

Time& Time::setSecond(int s)
{
	// TODO: 於此處插入傳回陳述式
	if (s >= 0 && s < 60)
		second = s;
	else
		throw invalid_argument("second must be 0-59");

	return *this;
}

unsigned int Time::getHour() const
{
	return hour;
}

unsigned int Time::getMinute() const
{
	return minute;
}

unsigned int Time::getSecond() const
{
	return second;
}

void Time::printUniversal() const
{
	cout << setfill('0') << setw(2) << hour << ":"
		<< setw(2) << minute << ":" << setw(2) << minute;
}

void Time::printStandard() const
{
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) <<
		":" << setfill('0') << setw(2) << minute << ":" << setw(2) << second
		<< (hour < 12 ? " AM" : " PM");
}

