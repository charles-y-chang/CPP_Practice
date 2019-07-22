#pragma once
#include<array>
#include<string>
class GradeBook
{
public:
	// constant
	static const size_t students = 10;
	static const size_t tests = 3;

	GradeBook(const std::string&,
		std::array <std::array<int, tests>, students>&);

	void setCourseName(const std::string&);
	std::string getCoursename() const;
	void displayMessage()const;
	void processGrade()const;
	int getMinimum() const;
	int getMaximum() const;
	double getAverage(const std::array<int, tests>&) const;
	void outputBarChart() const;
	void outputGrades() const;
private:
	std::string courseName;
	std::array< std::array<int,tests>,students> grades;

};


