#pragma once
#include <iostream>
using namespace std;
class IntArray
{
private:
	int _length;
	int* _arr;
public:
	IntArray();
	IntArray(int);
	IntArray(int a[], int n);
	IntArray(const IntArray& arr);
	~IntArray();
	IntArray& operator =(const IntArray& arr);
	int& operator [](int index);
	operator int();
	friend ostream& operator <<(ostream& os, const IntArray& arr);
	friend istream& operator >>(istream& is, IntArray& arr);
};

