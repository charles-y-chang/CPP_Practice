// 0712.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<array>
using namespace std;

void staticArrayInit();
void automaticArrayInt();
const size_t arraySize = 3;

int main()
{
	cout << "First call to each function:\n";
	staticArrayInit();
	automaticArrayInt();

	cout << "\n\nSecond call to each function:\n";
	staticArrayInit();
	automaticArrayInt();
	cout << endl;
}

void staticArrayInit(void)
{
	static array<int, arraySize>array1;
	cout << "\nValue on entering staticArrayInt:\n";
	for (size_t i = 0; i < array1.size(); ++i)
		cout << "array1[" << i << "] = " << array1[i] << " ";

	cout << "\nValue on exiting staticArrayInt:\n";

	for (size_t j = 0; j < array1.size(); ++j)
		cout << "array1[" << j << "] = " << (array1[j] += 5) << " ";

}

void automaticArrayInt(void)
{
	array<int, arraySize> array2 = { 1,2,3 };

	cout << "\n\nValues on entering automaticArrayInt:\n";
	for (size_t i = 0; i < array2.size(); ++i)
		cout << "array2[" << i << "] = " << array2[i] << " ";
	
	cout << "\n\nValues on exiting automaticArrayInt:\n";
	for (size_t i = 0; i < array2.size(); ++i)
		cout << "array2[" << i << "] = " << (array2[i]+=5) << " ";

}
