#include "Employee.h"
#include<iostream>
#include"Employee.h"
#include"Date.h"
using namespace std;

Employee::Employee(const std::string& first, const std::string&last, const Date& dateOfBirth, const Date&dateOfHire)
	:firstName(first),
	lastName(last),
	birthDate(dateOfBirth),
	hireDate(dateOfHire)
{
	cout << "Employee object constructor:"
		<< firstName << " " << lastName << endl;
}

void Employee::print()
{
	cout << lastName << ", " << firstName << " Hired";
	hireDate.print();
	cout << " Birthday: ";
	birthDate.print();
	cout << endl;
}

Employee::~Employee()
{
	cout << "Employee object destructor: "
		<< lastName << ", " << firstName << endl;
}
