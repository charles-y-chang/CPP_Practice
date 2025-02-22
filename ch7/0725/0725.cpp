// 0725.cpp
#include<iomanip>
#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;
void outputVector(const vector<int>&);
void inputVector(vector<int>&);
int main() {
	vector <int> integers1(7);
	vector <int> integers2(10);

	cout << "Size of vector intergers1 is " << integers1.size()
		<< "\nvector after initialzation:" << endl;
	outputVector(integers1);

	cout << "Size of vector intergers2 is " << integers2.size()
		<< "\nvector after initialzation:" << endl;
	outputVector(integers2);


	cout << "\nEnter 17 integers:" << endl;
	inputVector(integers1);
	inputVector(integers2);

	cout << "\nAfter input, the vectors contain:\n"
		<< "integers1:" << endl;
	outputVector(integers1);
	cout << "integers2" << endl;
	outputVector(integers2);


	cout << "\nEvalutaing: integers1 != integers2" << endl;
	if (integers1 != integers2)
		cout << "integers1 and integers2 are not equal" << endl;

	vector <int> integers3(integers1);
	cout << "\nSize of vector integers3 is " << integers3.size()
		<< "\n vector after initialization:" << endl;
	outputVector(integers3);

	cout << "\nAssigning integers2 to integers1:" << endl;
	integers1 = integers2;
	cout << "integers1:" << endl;
	outputVector(integers1);
	cout << "integers2:" << endl;
	outputVector(integers2);

	cout << "\nEvaluating: integers1 == integers2" << endl;
	if(integers1==integers2)
		cout << "integers1 and integers2 are equal" << endl;
	cout << "\nintegers1[5] is " << integers1[5];
	cout << "\n\nAssigning 1000 to integers1[5]" << endl;
	integers1[5] = 1000;
	cout << "integers1:" << endl;
	outputVector(integers1);

	// attempt to use out-of-rsnge subscript
	try {
		cout << "\nAttempt to display integers1.at( 15 )" << endl;
		cout << integers1.at(15) << endl;
	}
	catch (out_of_range& ex) {
		cerr << "An exception occured: " << ex.what() << endl;
	}

	// changing the size of a vector
	cout << "\nCurrent integers3 size is " << integers3.size() << endl;
	integers3.push_back(1000);// add 1000 to the end of the vector
	cout << "New integers3 size is: " << integers3.size() << endl;
	cout << "integers3 now contains: ";
	outputVector(integers3);
}

void outputVector(const vector<int>& array) {
	for (int item : array)
		cout << item << " ";
	cout << endl;
}

void inputVector(vector<int>& array) {
	for (int &item : array)
		cin >> item;
}

