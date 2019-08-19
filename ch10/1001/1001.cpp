// 1001.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<string>
using namespace std;

int main()
{
	string s1("happy");
	string s2(" birthday");
	string s3;
	cout << s1 << " " << s2 << " " << s3
		<< "\ns2==s1: " << (s2 == s1 ? "true" : "false")
		<< "\ns2!=s1: " << (s2 != s1 ? "true" : "false")
		<< "\ns2<s1: " << (s2 < s1 ? "true" : "false")
		<< "\ns2>s1: " << (s2 > s1 ? "true" : "false")
		<< "\ns2>=s1: " << (s2 >= s1 ? "true" : "false")
		<< "\ns2<=s1: " << (s2 <= s1 ? "true" : "false");

	if (s3.empty()) {
		cout << "\n\ns3 is empty\n";
		s3 = s1;
		cout << "s3 is: " << s3 << endl;
		}

	cout << "\n\ns1+s2 = ";
	s1 += s2;
	cout << s1;

	cout << "\n\n\ns1+\"to you\" = ";
	s1 += " to you.\n";
	cout << s1;

	cout << "\ns1.substr(0,14) = " << s1.substr(0, 14) << endl;
	cout << "\ns1.substr(15) = " << s1.substr(15) << endl;

	string s4(s1);
	cout << "\ns4 = " << s4 << endl;

	cout << "s4 = s4 => ";
	s4 = s4;
	cout << s4 << endl;
	s1[0] = 'H';
	s1[6] = 'B';
	cout << s1 << endl;

	try {
		cout << "s1.at(30)=d" << endl;
		s1.at(30) = 'd';
	}
	catch (out_of_range& e) {
		cout << "Exception:" << e.what() << endl;
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
