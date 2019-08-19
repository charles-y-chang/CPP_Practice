#include "PhoneNumber.h"
#include<iomanip>
using namespace std;

ostream &operator<<(ostream& output, const PhoneNumber&number)
{
	output << "(" << number.areaCode << ")"
		<< number.exchange << "-" << number.line;
	return output;
	// TODO: 於此處插入傳回陳述式
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
	
	// TODO: 於此處插入傳回陳述式
}
