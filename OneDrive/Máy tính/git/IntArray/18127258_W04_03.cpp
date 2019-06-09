#include "IntArray.h"

void main()
{
	// Using dynamic allocated array
	IntArray m1;
	IntArray m2(7);
	int a[100];
	int n = 7;
	for (int i = 0; i < n; i++)
	{
		a[i] = i * 2 / 7;
	}
	IntArray m3(a, n);
	IntArray m4(m2);
	IntArray m5;
	m5 = m2;

	cin >> m2;
	cout << m2 << endl;
	cout << m3;
	try {
		cout << m3[7] << endl;
	}
	catch (const char* s) {
		cout << "Invalid value!" << endl;
	}
	try {
		m3[7] = 1;
	}
	catch (const char* s) {
		cout << "Invalid value!" << endl;
	}
	try {
		cout << m3[7] << endl;
	}
	catch (const char* s) {
		cout << "Invalid value!" << endl;
	}
	cout << (int)m4;
}

