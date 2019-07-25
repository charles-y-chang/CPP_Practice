// 0901.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<stdexcept>
#include"Time.h"
using namespace std;

int main()
{
	Time t;
	cout << "The initial universal time is ";
	t.printUniversal();
	cout << "\nThe initial standard time is ";
	t.printStandard();

	t.setTime(13, 27, 6);

	cout << "\n\nUniversal time after setTime is ";
	t.printUniversal();
	cout << "\nStandard time after setTime is ";
	t.printStandard();

	try {
		t.setTime(99, 99, 99);
	}
	catch (invalid_argument& e) {
		cout << "\nException: " << e.what() << endl;
	}

	cout << "\n\nAfter attempting invalid settings:"
		<< "\nUniversal time: ";
	t.printUniversal();
	cout << "\nStandardTime ";
	t.printStandard();
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
