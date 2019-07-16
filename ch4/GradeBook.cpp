#include "GradeBook.h"
#include <iostream>
#include <iomanip>//parameterized stream manipulators
using namespace std;

GradeBook::GradeBook(std::string name)
{
	setCourseName(name);
}

void GradeBook::setCourseName(std::string name)
{
	if (name.size() <= 25)courseName = name;
	else {
		courseName = name.substr(0, 25);
		cerr << "Name \"" << name << "\" exceeds maximum length(25).\n" <<
			"Limiting courseName to first 25 characters.\n" << endl;
	}
}

string GradeBook::getCourseName() const {
	return courseName;
}

void GradeBook::displayMessage() const {
	cout << "Welcome to the grade book for \n" << getCourseName() << "!\n" << endl;
}
