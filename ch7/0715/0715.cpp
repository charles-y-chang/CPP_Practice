// 0715
#include<array>
#include"GradeBook.h"
using namespace std;
int main() {
	const array<int, GradeBook::students> grades =
	{ 86,68,94,100,83,78,85,91,76,87 };
	string courseName = "CS101";
	GradeBook myGadeBook(courseName, grades);
	myGadeBook.displayMessage();
	myGadeBook.processGrades();

}