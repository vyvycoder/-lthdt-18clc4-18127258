#pragma once
#include <sstream>
#include "Tokenizer.h"
#define INVALID -1
#include <iostream>
using namespace std;
class DynamicArray
{
private:
	const int INITIAL_SIZE = 128;
	int* _a;
	int _len;
	int _max;
public:
	DynamicArray();
	DynamicArray(int n);	// khởi tạo mảng n phần tử {0} 
	DynamicArray(int* _array, int len);
	DynamicArray(const DynamicArray& da);
	~DynamicArray();
	void pushBack(int value);
	int getAt(int index);
	void setMax(int max);
	void setAt(int index, int value);
	int getLength();
	int getMax();
	void output();
	string ToString();
	static DynamicArray* Parse(string s);
};

