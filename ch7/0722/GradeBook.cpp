#include "GradeBook.h"
#include <iostream>
#include<iomanip>
using namespace std;

GradeBook::GradeBook(const std::string& name, std::array<std::array<int, tests>, students>&gradesArray)
	:courseName(name),grades(gradesArray)
{
}

void GradeBook::setCourseName(const std::string&name)
{
	this->courseName = name;
}

std::string GradeBook::getCoursename() const
{
	return this->courseName;
}

void GradeBook::displayMessage() const
{
	cout << "Welcome to the grade book for\n" << getCoursename() << "!" << endl;
}

void GradeBook::processGrade() const
{
	outputGrades();
	cout << "\nLowest grade in grade book is " << getMinimum() <<
		"\nHighest grade in the grade book is " << getMaximum() << endl;
	outputBarChart();
}

int GradeBook::getMinimum() const
{
	int lowGrade = 100;
	for (auto const& students : grades) {
		for (auto const& grade : students) {
			if (lowGrade > grade)
				lowGrade = grade;

		}
	}
	return lowGrade;
	
}

int GradeBook::getMaximum() const
{
	int highGrade = 0;
	for (auto const& students : grades) {
		for (auto const& grade : students) {
			if (highGrade < grade)
				highGrade = grade;
		}
	}
	return highGrade;
}

double GradeBook::getAverage(const array<int, tests>& setOfGrades) const {
	int total = 0;
	for (int grade : setOfGrades)
		total += grade;
	return static_cast<double> (total) / setOfGrades.size();
}
void GradeBook::outputBarChart() const
{
	cout<<"\nOverall grade distribution:"<<endl;
	
	const size_t frequencySize = 11;
	array<unsigned int, frequencySize>frequency = {};
	for (auto const &students : grades)
		for (auto const &grade : students)
			++frequency[tests/10];

	for (size_t count = 0; count < frequencySize; ++count) {
		//print grade distribution
		if (count == 0)
			cout << " 0-9: ";
		else if (count == 100)
			cout << "  100: ";
		else
		{
			cout << count * 10 << "-" << (count * 10) + 9 << ": ";
		}

		for (unsigned stars = 0; stars < frequency[stars]; ++stars)
			cout << "*";
	}

}

void GradeBook::outputGrades() const
{
	cout << "\n The grades are:\n\n";
	cout << "             ";

	for (size_t test = 0; test < tests; ++test)
		cout << "Test " << test + 1 << " ";
	cout << "Average" << endl;
	for (size_t student = 0; student < grades.size(); ++student) {
		cout << "Student " << setw(2) << student + 1;
		for (size_t test = 0; test < grades[student].size(); ++test)
			cout << setw(8) << grades[student][test];

		double average = getAverage(grades[student]);
		cout << setw(9) << setprecision(2) << fixed << average << endl;
	}
	
}
