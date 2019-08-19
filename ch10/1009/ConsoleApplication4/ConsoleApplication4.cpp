// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
// Array class 

#include <iostream>
#include<stdexcept>
#include"Array.h"
using namespace std;

int main()
{
	Array int1(7);
	Array int2;
	cout << "Size of int1 is: "
		<< int1.getSize()
		<< "\nArray after init. is: \n" << int1;
	cout << "\nSize of int2 is: "
		<< int2.getSize()
		<< "\nArray after init. is: \n" << int2;

	cout << "\nEnter 17 integers:" << endl;
	cin >> int1 >> int2;
	
	cout << "\nAfter input, the Array contain:\n"
		<< "int1:\n" << int1
		<< "int2:\n" << int2;

	cout << "\nEvaluating: int1 != int2\n";
	if (int1 != int2)
		cout << "int1 != int2\n";

	Array int3(int1);
	cout << "\nSize of Array int3 is:" <<
		int3.getSize()
		<< "\nAfter init.:\n" << int3;

	cout << "\n Assigning int2 to int1:" << endl;
	int1 = int2;
	cout << "int1:\n" << int1
		<< "int2:\n" << int2;
	cout << "\nEvaluting: int1 == int2" << endl;
	if (int1 == int2)
		cout << "int1 == int2" << endl;

	cout << "\nint1[5] is " << int1[5] << endl;
	cout << "\nAssigning 1000 to int[5]" << endl;
	int1[5] = 1000;
	cout << "int1:\n" << int1;

	try {
		cout << "\nAttempt to assign 1000 to int1[15]" << endl;
		int1[15] = 1000;
	}
	catch (out_of_range& e) { 
		cout << "An exception occoured: " << e.what() << endl;
	}
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
