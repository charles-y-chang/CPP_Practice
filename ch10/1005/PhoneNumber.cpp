#include "PhoneNumber.h"
#include<iomanip>
using namespace std;

ostream &operator<<(ostream& output, const PhoneNumber&number)
{
	output << "(" << number.areaCode << ")"
		<< number.exchange << "-" << number.line;
	return output;
	// TODO: �󦹳B���J�Ǧ^���z��
}

istream &operator>>(istream& input, const PhoneNumber&number)
{
	input.ignore();
	input >> setw(3) >> number.areaCode;
	input.ignore(2);
	input >> setw(3)>>number.exchange;
	input.ignore();
	input >> setw(4) >> number.line;
	return input;
	
	// TODO: �󦹳B���J�Ǧ^���z��
}
