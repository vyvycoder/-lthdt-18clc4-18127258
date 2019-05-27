#include "Fraction.h"

Fraction::Fraction() {
	_num = 0;
	_den = 1;
}

Fraction::Fraction(int x, int y) {
	_num = x;
	_den = y;
}

Fraction::~Fraction() {

}

void Fraction::output() {
	cout << _num << "/" << _den << endl;
}