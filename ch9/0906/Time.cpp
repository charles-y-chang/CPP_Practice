#include "Time.h"
#include<iostream>
#include<iomanip>
#include<stdexcept>
using namespace std;

Time::Time(int h, int m, int s )
{
	setTime(h, m, s);
}

void Time::setTime(int h , int m , int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::setHour(int h)
{
	if (h >= 0 && h < 24)
		this->hour = h;
	else
		throw invalid_argument("hour must be 0-23");
}

void Time::setMinute(int m)
{
	if (m >= 0 && m < 60)
		this->minute = m;
	else throw invalid_argument("Minute must be 0-59");
}

void Time::setSecond(int s)
{
	if (s >= 0 && s < 60)
		this->second = s;
	else throw
		invalid_argument("second must be 0-59");
}

unsigned int Time::getHour() const
{
	return this->hour;
}

unsigned int Time::getMinute() const
{
	return this->minute;
}

unsigned int Time::getSecond() const
{
	return this->second;
}

void Time::printUniversal() const
{
	cout << setfill('0') << setw(2) << getHour() << ":" << setw(2)
		<< getMinute() << setw(2) << getSecond();
}

void Time::printStandard() const
{
	cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":"
		<< setfill('0') << setw(2) << getMinute() << ":" << setw(2)
		<< getSecond() << (hour < 12 ? "AM" : "PM");
}
