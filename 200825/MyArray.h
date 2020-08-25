#pragma once

#include <iostream>

class MyArray
{
private : 
	int maxIdx;
	int* arr;

public : 
	MyArray(int _arrLen) :
		maxIdx(_arrLen)
	{
		arr = new int[maxIdx];
	}
	~MyArray()
	{
		if (arr)
		{
			delete[] arr;
		}
		arr = nullptr;
	}

public :
	int operator[](int idx) const
	{
		if (idx < 0 || idx >= maxIdx)
		{
			throw "You can't access this index";
		}
		return arr[idx];
	}

	int& operator[](int idx)
	{
		if (idx < 0 || idx >= maxIdx)
		{
			throw "You can't access this index";
		}
		return arr[idx];
	}
};