#include "DynamicArray.h"



DynamicArray::DynamicArray()
{
	_max = INITIAL_SIZE;
	_a = new int[INITIAL_SIZE];
	_len = 0;
}


DynamicArray::~DynamicArray()
{
	delete[] _a;
}

DynamicArray::DynamicArray(int n) {
	_len = n;
	_a = new int[INITIAL_SIZE];
	_max = INITIAL_SIZE;
	for (int i = 0; i < n; i++) {
		_a[i] = 0;
	}
}
DynamicArray::DynamicArray(int* _array, int len) {
	_len = len;
	_a = new int[INITIAL_SIZE];
	_max = INITIAL_SIZE;
	for (int i = 0; i < len; i++)
		_a[i] = _array[i];
}
DynamicArray::DynamicArray(const DynamicArray& da) {
	_len = da._len;
	_a = new int[INITIAL_SIZE];
	_max = INITIAL_SIZE;
	for (int i = 0; i < _len; i++)
		_a[i] = da._a[i];
}

void DynamicArray::pushBack(int value) {
	_a[_len] = value;
	_len++;
}

int DynamicArray::getAt(int index) {
	if (index < _len && index > 0)
		return _a[index];
	return INVALID;
}

void DynamicArray::setMax(int max) {
	_max = max;
}
void DynamicArray::setAt(int index, int value) {
	if (index > 0 && index < _len)
		_a[index] = value;
}
int DynamicArray::getLength() {
	return _len;
}
int DynamicArray::getMax() {
	return _max;
}

void DynamicArray::output() {
	cout << "Length: " << _len << endl;
	for (int i = 0; i < _len; i++)
		cout << _a[i] << " ";
	cout << endl;
}

string DynamicArray::ToString() {
	stringstream writer;
	for (int i = 0; i < _len - 1; i++)
		writer << _a[i] << ",";
	writer << _a[_len - 1];
	return writer.str();
}
DynamicArray* DynamicArray::Parse(string s) {
	vector<string> v = Tokenizer::Parse(s,",");
	int* _a = new int[v.size()];
	for (int i = 0; i < v.size(); i++) {
		_a[i] = stoi(v[i]);
	}
	DynamicArray* d = new DynamicArray(_a, v.size());
	delete[] _a;
	return d;
}