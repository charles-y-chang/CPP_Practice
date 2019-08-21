#ifndef COMMISSION_H
#define COMMISSION_H
#include<string>
class CommissionEmployee
{
public:
	CommissionEmployee(const std::string&, const std::string&, const std::string&
		, double = 0.0, double = 0.0);
	void setFirstName(const std::string&);
	std::string getFirstName() const;

	void setLastName(const std::string&);
	std::string getLastName() const;

	void setSocialSecurityName(const std::string&);
	std::string getSocialSecurityName() const;

	void setGrossSales(double);
	double getGrossSales()const;

	void setCommissionRate(double);
	double getCommissionRate()const;

	double earnings()const;
	void print()const;

protected:
	std::string firstName;
	std::string lastName;
	std::string socialSecruityNumber;
	double grossSales;
	double commissionRate;
};

#endif