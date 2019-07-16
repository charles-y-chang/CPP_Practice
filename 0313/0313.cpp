#include<iostream>
#include"GradeBook.h"
using namespace std;
int main() {
	GradeBook gb1("cs101");
	//GradeBook gb2("cs102");
//	cout << "gb1: " << gb1.getCourseName() << "\ngb2: " << gb2.getCourseName() << endl;
	gb1.displayMessage();
	gb1.determineClassAverage();
}