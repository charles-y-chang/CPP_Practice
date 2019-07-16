#pragma once
//Function template maximum header
template <typename T>
//C++11 introduces trailing return types for functions. To specify a trailing return type you
//place the keyword auto before the function name, then follow the function¡¦s parameter
//list with ->and the return type.
auto maximum(T value1, T value2, T value3)->T
{
	T maxValue = value1;
	if (value2 > maxValue)maxValue = value2;
	if (value3 > maxValue)maxValue = value3;
	return maxValue;
}

//T maximum(T value1, T value2, T value3) {
//	T maxValue = value1;
//	if (value2 > maxValue)maxValue = value2;
//	if (value3 > maxValue)maxValue = value3;
//	return maxValue;
//}

