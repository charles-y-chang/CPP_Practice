// 0705
// Set array s to the even integers from 2 to 10.
#include<iostream>
#include<iomanip>
#include<array>
using namespace std;

int main() {
	const size_t arraySize = 5;
	array<int, arraySize>s;
	for (size_t i = 0; i < s.size(); ++i)
		s[i] = 2 + 2 * i;
	cout << "Element" << setw(13) << "Value" << endl;

	for (size_t j = 0; j < s.size(); ++j)
		cout << setw(7) << j << setw(13) << s[j] << endl;
}