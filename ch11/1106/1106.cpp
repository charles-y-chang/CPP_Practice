// 1106.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
// 1109

#include <iostream>
#include<iomanip>
#include"CommissionEmployee.h"
#include"BasePlusCommissionEmployee.h"
using namespace std;
int main()
{
	CommissionEmployee employee("Sue", "Jones", "222-22-2222", 10000, .06);
	cout << fixed << setprecision(2);
	
	cout << "Employee information obtained by get functions: \n"
		<< "\nFirst name is " << employee.getFirstName()
		<< "\nLast name is " << employee.getLastName()
		<< "\nSSN is " << employee.getSocialSecurityName()
		<< "\nGross sales is " << employee.getGrossSales()
		<< "\nCommission rate is " << employee.getCommissionRate()<<endl;

	employee.setGrossSales(8000);
	employee.setCommissionRate(.1);
	cout << "\nUpdated employee info\n" << endl;
	employee.print();

	BasePlusCommissionEmployee be("Bob", "Lewis", "333-33-3333",
		5000, .04, 300);
	cout << fixed << setprecision(2);
	cout << "Employee information obtained by get functions: \n"
		<< "\nFirst name is " << be.getFirstName()
		<< "\nLast name is " << be.getLastName()
		<< "\nSSN is " << be.getSocialSecurityName()
		<< "\nGross sales is " << be.getGrossSales()
		<< "\nCommission rate is " << be.getCommissionRate()
		<< "\nBase salary is " << be.getBaseSalary()
		<< endl;
	be.setBaseSalary(1000);
	cout << "\nUpdated employee info.\n";
	be.print();
	cout << "\b BE's earing: $" << be.earnings() << endl;
	
	
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
