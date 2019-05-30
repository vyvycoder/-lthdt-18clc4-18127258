#include "DynamicArray.h"
#include <iostream>

int main()
{
	DynamicArray da1;
	da1.output();
	DynamicArray da2(3);
	da2.output();
	int* a = new int[5];
	for (int i = 0; i < 5; i++)
		a[i] = i + 1;
	DynamicArray da3(a, 5);
	da3.output();
	DynamicArray da4(da2);
	da4.output();
	da3.pushBack(6);
	da3.output();
	cout << da3.getAt(3) << endl;
	da1.setMax(200);
	cout << da1.getMax() << endl;
	cout << da2.getLength() << endl;
	delete[] a;
}


