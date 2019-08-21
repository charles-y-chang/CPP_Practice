#include "BasePlusCommissionEmployee.h"
#include<iostream>
#include<stdexcept>
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const std::string&first, const std::string&last, const std::string&ssn, double sales, double rate, double salary):
	CommissionEmployee(first,last,ssn,sales,rate)
{
	setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
	if (salary >= 0.0)
		baseSalary = salary;
	else
		throw invalid_argument("Salary must be >=0.0");
}

double BasePlusCommissionEmployee::getBaseSalary() const
{
	return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const
{
	return baseSalary+(commissionRate*grossSales);
}

void BasePlusCommissionEmployee::print() const
{
	cout << "commission employee: " << firstName << " " << lastName
		<< "\nssn: " << socialSecruityNumber
		<< "\ngross sales: " << grossSales
		<< "\ncommission rate: " << commissionRate
		<< "\nBase salay: " << baseSalary << endl;
}
