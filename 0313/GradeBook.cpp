#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name)
	:courseName(name) {

}

void GradeBook::setCourseName(string name) {
	courseName = name;
}

string GradeBook::getCourseName() const {
	return courseName;
}

void GradeBook::displayMessage() const {
	cout << "Welcome to the grade book for \n " << getCourseName() << "!" << endl;
}

void GradeBook::determineClassAverage() const
{
	int total = 0;
	unsigned int gradeCounter = 1;
	while (gradeCounter <= 10) {
		cout << "Enter grade: ";
		int grade = 0;
		cin >> grade;
		total += grade;
		gradeCounter++;
	}

	int average = total / 10;
	cout << "\nTotal of all 10 grade is " << total << endl;
	cout << "Class average is " << average << endl;
}
