// 0906.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<stdexcept>
#include"Time.h"
using namespace std;


int main()
{
	Time t1;
	Time t2(2);
	Time t3(21, 34);
	Time t4(12, 25, 42);

	cout << "Constructed with:\n\nt1: all arguments defaulted\n ";
	t1.printUniversal();
	cout << endl;
	t1.printStandard();

	try {
		Time t5(22, 74, 99);

	}
	catch (invalid_argument& e) {
		cerr << "\n\nException: " << e.what() << endl;
	}

	Time wakeUp(6, 45, 0);
	const Time noon(12, 0, 0);
	wakeUp.setHour(18);
	noon.setHour(12);// const
	wakeUp.getHour();
	noon.getMinute();
	noon.printUniversal();
	noon.printStandard();
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
