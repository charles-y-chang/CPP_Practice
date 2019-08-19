#include "Array.h"
#include<iostream>
#include<iomanip>
#include<stdexcept>
using namespace std;

std::ostream& operator<<(std::ostream& out, const Array&a)
{
	// TODO: 於此處插入傳回陳述式
	for (size_t i = 0; i < a.size; i++) {
		out << setw(12) << a.ptr[i];
		if ((i + 1) % 4 == 0)
			out << endl;
	}
	if (a.size % 4 != 0)
		out << endl; //end last line of output
	return out;

}

std::istream& operator>>(std::istream&in, Array&a)
{
	// TODO: 於此處插入傳回陳述式
	for (size_t i = 0; i < a.size; i++) {
		in >> a.ptr[i];
	}
	return in;
}

Array::Array(int arraySize)
	:size(arraySize > 0 ? arraySize : throw invalid_argument("Array size must greater than 0")),
	ptr(new int[size])
{
	for (size_t i = 0; i < size; i++)
		ptr[i] = 0;
}

Array::Array(const Array& arrayToCopy):
	size(arrayToCopy.size),
	ptr(new int[size])
{
	for (size_t i = 0; i < size; i++)
		ptr[i] = arrayToCopy.ptr[i];
}

Array::~Array()
{
	delete[] ptr;
}

size_t Array::getSize() const
{
	return size;
}

const Array& Array::operator=(const Array&right)
{
	// TODO: 於此處插入傳回陳述式
	if (&right != this) {
		if (size != right.size) {
			delete[] ptr;
			size = right.size;
			ptr = new int[size];
		}
		for (size_t i = 0; i < size; i++) {
			ptr[i] = right.ptr[i];
		}
	}
	return *this;//enable x = y = z
}

bool Array::operator==(const Array&right) const
{
	if (right.size != this->size)
		return false;
	for (size_t i = 0; i < size; i++) {
		if (ptr[i] != right.ptr[i])
			return false;
	}
	return true;
}

int& Array::operator[](int subscript)
{
	if (subscript < 0 || subscript >= size)
		throw out_of_range("Subscript out of range");
	return ptr[subscript];
}

int Array::operator[](int subscript) const
{
	if (subscript < 0 || subscript >= size)
		throw out_of_range("Subscript out of range");
	return ptr[subscript];
}
