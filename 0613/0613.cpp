// 0613.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

void useLocal();
void useStaticLocal();
void useGlobal();
int x = 1;


int main()
{
	cout << "global x in main is " << x << endl;
	int x = 5;
	cout<<"local x in main's outer scope is " << x << endl;
	{
		int x = 7;
		cout << "local x in main's inner scope is " << x << endl;
	}

	cout << "local x in main's outer scope is " << x << endl;

	useLocal();
	useStaticLocal();
	useGlobal();
	useLocal();
	useStaticLocal();
	useGlobal();
	cout << "\nlocal x in main is " << x << endl;
}

void useLocal() {
	int x = 25;
	cout << "\nlocal x is " << x << " on entering useLocal" << endl;
	++x;
	cout << "local x is " << x << " on existing useLocal" << endl;
}

void useStaticLocal() {
	static int x = 50;
	cout << "\nlocal static x is " << x << " on entering useStaticLocal" << endl;
	++x;
	cout << "local x is " << x << " on existing useStaticLocal" << endl;
}
void useGlobal() {
	
	cout << "\nglobal x is " << x << " on entering useGlobal" << endl;
	x*=10;
	cout << "global x is " << x << " on existing useGLobal" << endl;
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
