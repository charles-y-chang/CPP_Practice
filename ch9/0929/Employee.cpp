#include "Employee.h"
#include<iostream>
using namespace std;

unsigned int Employee::count = 0;
Employee::Employee(const std::string& first, const std::string& last)
	:firstName(first),
	lastName(last)
{
	++count;
	cout << "Employee constructor for" << firstName << " " << lastName << " called" << endl;

}

Employee::~Employee()
{
	cout << "~Employee() called for" << firstName << " " << lastName << endl;
	--count;
}

std::string Employee::getFirstName() const
{
	return firstName;
}

std::string Employee::getLastName() const
{
	return lastName;
}

unsigned int Employee::getCount()
{
	return count;
}
