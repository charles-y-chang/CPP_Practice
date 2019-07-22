// 0718.cpp
// Sorting and searching arrays.
#include<iostream>
#include<iomanip>
#include<array>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	const size_t array_size = 7;
	array<string, array_size> colors = { "red","orange","yellow","green","blue","indigo","violet" };
	cout << "Unsorted array:\n";
	for (string color : colors)
		cout << color << " ";
	sort(colors.begin(), colors.end());//sort contents of colors

	cout << "\nSorted array:\n";
	for (string item : colors)
		cout << item << " ";
	bool found = binary_search(colors.begin(), colors.end(), "indigo");
	cout << "\n\n\"indigo\" " << (found ? "was" : "was not") << " found in colors" << endl;

	found = binary_search(colors.begin(), colors.end(), "cyan");
	cout << "\n\n\"cyan\" " << (found ? "was" : "was not") << " found in colors" << endl;

}