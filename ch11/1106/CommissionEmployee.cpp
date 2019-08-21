
#include "CommissionEmployee.h"
#include<iostream>
#include<stdexcept>
using namespace std;

CommissionEmployee::CommissionEmployee(const std::string&first, const std::string&last, const std::string&ssn, double sales, double rate)
{
	firstName = first;
	lastName = last;
	socialSecruityNumber = ssn;
	setGrossSales(sales);
	setCommissionRate(rate);
}

void CommissionEmployee::setFirstName(const std::string&first)
{
	firstName = first;

}

std::string CommissionEmployee::getFirstName() const
{
	return firstName;
}

void CommissionEmployee::setLastName(const std::string&last)
{
	lastName = last;
}

std::string CommissionEmployee::getLastName() const
{
	return lastName;
}

void CommissionEmployee::setSocialSecurityName(const std::string&ssn)
{
	socialSecruityNumber = ssn;
}

std::string CommissionEmployee::getSocialSecurityName() const
{
	return socialSecruityNumber;
}

void CommissionEmployee::setGrossSales(double sales)
{
	if (sales >= 0.0)
		this->grossSales = sales;
	else
		throw invalid_argument("Gross sales must be >=0.0");
}

double CommissionEmployee::getGrossSales() const
{
	return grossSales;
}

void CommissionEmployee::setCommissionRate(double rate)
{
	if (rate >= 0.0 && rate <= 1.0)
		commissionRate = rate;
	else
		throw invalid_argument("Commisiion rate must be >0.0 and < 1.0");
}

double CommissionEmployee::getCommissionRate() const
{
	return commissionRate;
}

double CommissionEmployee::earnings() const
{
	return commissionRate*grossSales;
}

void CommissionEmployee::print() const
{
	cout << "commission employee: " << firstName << " " << lastName
		<< "\nssn: " << socialSecruityNumber
		<< "\ngross sales: " << grossSales
		<< "\ncommission rate: " << commissionRate;
}
