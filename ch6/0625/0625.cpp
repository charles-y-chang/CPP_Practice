// 0625.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//Function template maximum test program.

#include <iostream>
#include "maximum.h"
using namespace std;
int main()
{
	int int1, int2, int3;
	cout << "Input 3 int values: ";
	cin >> int1 >> int2 >> int3;

	cout << "The max value is: " << maximum(int1, int2, int3)<<endl;

	double d1, d2, d3;
	cout << "\n\nInput 3 double value: ";
	cin >> d1 >> d2 >> d3;
	cout << "The max double is: " << maximum(d1, d2, d3) << endl;

	char c1, c2, c3;
	cout << "\n\nInput 3 char value: ";
	cin >> c1 >> c2 >> c3;
	cout << "The max char is: " << maximum(c1, c2, c3) << endl;
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
