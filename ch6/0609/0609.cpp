// 0609.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main()
{
	unsigned int f1 = 0;
	unsigned int f2 = 0;
	unsigned int f3 = 0;
	unsigned int f4 = 0;
	unsigned int f5 = 0;
	unsigned int f6 = 0;
	for (unsigned int roll = 1; roll <= 6000000; ++roll) {
		unsigned int face = 1 + rand() % 6;

		switch (face) {
		case 1:
			++f1;
			break; 
		case 2:
				++f2;
				break;
		case 3:
			++f3;
			break;
		case 4:
			++f4;
			break;
		case 5:
			++f5;
			break;
		case 6:
			++f6;
			break;
		default:
			cout << "Program should never get here!";
		}
	}
	cout << "Face" << setw(13) << "Frequency" << endl;
	cout << "   1" << setw(13) << f1
		<< "\n   2" << setw(13) << f2
		<< "\n   3" << setw(13) << f3
		<< "\n   4" << setw(13) << f4
		<< "\n   5" << setw(13) << f5
		<< "\n   6" << setw(13) << f6 << endl;
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
