#include "IntArray.h"

IntArray::IntArray() {
	_length = 0;
	_arr = NULL;
}
IntArray::IntArray(int len) {
	_length = len;
	_arr = new int[len];
	for (int i = 0; i < len; i++)
		_arr[i] = 0;
}
IntArray::IntArray(int a[], int n) {
	_length = n;
	_arr = new int[_length];
	for (int i = 0; i < n; i++) {
		_arr[i] = a[i];
	}
}
IntArray::IntArray(const IntArray& arr) {
	_length = arr._length;
	_arr = new int[_length];
	for (int i = 0; i < _length; i++)
		_arr[i] = arr._arr[i];
}
IntArray::~IntArray() {
	delete[] _arr;
}
IntArray& IntArray::operator =(const IntArray& arr) {
	delete[] _arr;
	_length = arr._length;
	_arr = new int[_length];
	for (int i = 0; i < _length; i++)
		_arr[i] = arr._arr[i];
	return *this;
}
int& IntArray::operator [](int index) {
	if (index >= _length)
		throw "Invalid index";
	return _arr[index];
}
IntArray::operator int() {
	return _length;
}
ostream& operator <<(ostream& os, const IntArray& arr) {
	for (int i = 0; i < arr._length; i++)
		os << arr._arr[i] << " ";
	return os;
}
istream& operator >>(istream& is, IntArray& arr) {
	cout << "Array length: ";
	is >> arr._length;
	arr._arr = new int[arr._length];
	for (int i = 0; i < arr._length; i++) {
		cout << "a[" << i << "]= ";
		is >> arr._arr[i];
	}
	return is;
}
	
	