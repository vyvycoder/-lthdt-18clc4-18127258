#include "DynamicArray.h"

void main() {
	DynamicArray d(5);
	cout << d.ToString() << endl;
	DynamicArray* d1 = new DynamicArray(*DynamicArray::Parse(d.ToString()));
	cout << d1->ToString() << endl;
	delete d1;
}