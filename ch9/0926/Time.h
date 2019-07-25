#pragma once
// Cascading member function calls.
#ifndef TIME_H
#define TIME_H
class Time
{
public:
	explicit Time(int = 0, int = 0, int = 0);
	Time& setTime(int hr, int min, int sec );
	Time& setHour(int h);
	Time& setMinute(int m);
	Time& setSecond(int s);

	unsigned int getHour()const;
	unsigned int getMinute()const;
	unsigned int getSecond()const;

	void printUniversal() const;
	void printStandard()const;
private:
	unsigned int hour;
	unsigned int minute;
	unsigned second;
};
#endif // !TIME_H


