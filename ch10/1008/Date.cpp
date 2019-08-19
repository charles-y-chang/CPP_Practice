#include "Date.h"
#include<iostream>
#include<string>
using namespace std;
const array <unsigned int, 13> Date::days =
{ 0,31,28,31,30,31,30,31,31,30,31,30,31 };

Date::Date(int m, int d, int y)
{
	setDate(m, d, y);
}

void Date::setDate(int mm , int dd, int yy)
{
	if (mm >= 1 && mm <= 12)
		month = mm;
	else
		throw invalid_argument("Month must be 1-12");
	if (mm >= 1 && mm <= 31)
		day=dd;
	else
		throw invalid_argument("Day must be 1-31");
	if (yy >= 1900 && yy <= 2100)
		year = yy;
	else
		throw invalid_argument("Year must be >=1900 and <=2100");

}

Date& Date::operator++()
{
	// TODO: 於此處插入傳回陳述式
	helpIncement();
	return *this;
}

Date Date::operator++(int)
{
	Date tmp = *this;
	this->helpIncement();
	return tmp;
}

Date& Date::operator+=(unsigned int additionalDays)
{
	for (int i = 0; i < additionalDays; ++i)
		helpIncement();
	return *this;
}

bool Date::leapYear(int testYear)
{
	if (testYear % 400 == 0 || testYear % 100 != 0 && testYear % 4 == 0)
		return true;
	else
		return false;
}

bool Date::endOfMonth(int tday) const
{
	if (this->month == 2 && this->leapYear(this->year))
		return tday == 29;
	else
		return tday = days[this->month];
}

void Date::helpIncement()
{
	if (!endOfMonth(day))
		++day;
	else if (this->month < 12) {
		++month;
		day = 1;
	}
	else {
		++year;
		month = 1;
		day = 1;
	}
}

std::ostream& operator<<(std::ostream& output, const Date& d)
{
	static string monthName[13] = { "", "January", "February", 
	"March", "April", "May", "June", "July", "August", 
	"September", "October", "November", "December" };
	output << monthName[d.month] << ' ' << d.day << ", " << d.year;
	return output;
}
