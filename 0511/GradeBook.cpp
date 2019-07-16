#include "GradeBook.h"
#include <iostream>
using namespace std;
GradeBook::GradeBook(std::string name):
	aCount(0),
	bCount(0),
	cCount(0),
	dCount(0),
	fCount(0)
{
	setCourseName(name);
}

void GradeBook::setCourseName(std::string name)
{
	if (name.size() <= 25) courseName = name;
	else {
		courseName = name.substr(0, 25);
		cerr << "Name \"" << name << "\"exceeds maximum length(25.\n" << "Limiting courseName to first 25 charcters.\n" << endl;
	}
}

std::string GradeBook::getCourseName() const
{
	return std::string(courseName);
}

void GradeBook::displayMessage() const
{
	cout << "Welcome to the grade book for\n" << getCourseName() << endl;
}

void GradeBook::inputGrades()
{
	int grade;
	cout << "Enter the letter grades." << endl
		<< "Enter the EOF charcter to end input" << endl;
	while ((grade = cin.get()) != EOF) {
		switch (grade) {
		case 'A':
		case 'a':
			++aCount;
			break;
		case 'B':
		case 'b':
			++bCount;
			break;
		case 'C':
		case 'c':
			++cCount;
			break;
		case 'D':
		case 'd':
			++dCount;
			break;
		case 'F':
		case 'f':
			++fCount;
			break;
		case '\n':
		case'\t':
		case ' ':
			break;
		default:
			cout << "Incorrect letter grade entered."
				<< "Enter a new grade." << endl;

		}
	}
}

void GradeBook::displayGradeReport() const
{
	cout << "\nNumber of students who received each letter grade:"
		<< "\nA" << aCount
		<< "\nB" << bCount
		<< "\nC" << cCount
		<< "\nD" << dCount
		<< "\nF" << fCount
		<< endl;
}
