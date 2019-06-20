#include "Fraction.h"

void main() {
	Fraction f(3, 5);
	cout << f.ToString() << endl;
	Fraction* f2 = new Fraction(*Fraction::Parse(f.ToString()));
	cout << f2->ToString() << endl;
	delete f2;
}