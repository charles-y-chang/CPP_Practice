#include "GradeBook.h"
#include<iostream>
#include<iomanip>
using namespace std;

GradeBook::GradeBook(const std::string& name, const std::array<int, students>& gradeArray)
	:courseName(name), grades(gradeArray)
{
}

void GradeBook::setCourseName(const std::string& name)
{
	this->courseName = name;

}

std::string GradeBook::getCourseName() const
{
	return this->courseName;
}

void GradeBook::displayMessage() const
{
	cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
}

void GradeBook::processGrades() const
{
	outputGrades();

	cout << setprecision(2) << fixed;
	cout << "\nClass average is " << getAverage() << endl;

	cout << "Lower grade is " << getMinimum() << "\nHighest grades is " << getMaximum() << endl;

	outputBarChart();
		
}

int GradeBook::getMinimum() const
{
	int lowGrade = 100;
	for (int grade : grades) {
		if (grade < lowGrade)
			lowGrade = grade;
	}
	return lowGrade;
}

int GradeBook::getMaximum() const
{
	int highrGrade = 0;
	for (int grade : grades) {
		if (grade > highrGrade)
			highrGrade = grade;
	}
	return highrGrade;
}

double GradeBook::getAverage() const
{
	int total = 0;
	for (int grade : grades)
		total += grade;
	return static_cast<double> (total) / grades.size();
}

void GradeBook::outputBarChart() const
{
	cout << "\nGrade distribution: " << endl;

	const size_t frequencySize = 11;
	array<unsigned int, frequencySize> frequency = {};
	for (int grade : grades)
		++frequency[grade / 10];
	for (size_t count = 0; count < frequencySize; ++count) {
		if (0 == count)
			cout << " 0-9: ";
		else if (10 == count)
			cout << "  100: ";
		else
			cout << count * 10 << "-" << (count * 10) + 9 << ": " ;
		for (unsigned int stars = 0; stars < frequency[count]; ++stars)
			cout << "*";
		cout << endl;
	}
}

void GradeBook::outputGrades() const
{
	cout << "\nThe grades are:\n\n";
	for (size_t student = 0; student < grades.size(); ++student)
		cout << "Student" << setw(2) << student + 1 << ": " << setw(3) << grades[student] << endl;
}
