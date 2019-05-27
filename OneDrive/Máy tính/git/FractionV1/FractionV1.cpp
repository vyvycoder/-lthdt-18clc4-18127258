#include "Fraction.h"
#include <iostream>
using namespace std;

int main() {
	Fraction f1;	//test tạo hàm không đối
	cout << "f1: ";
	f1.output();
	Fraction f2(3, 5);	//test tạo hàm có đối số
	cout << "f2: ";
	f2.output();
	Fraction* f3 = new Fraction(4, 5);
	cout << "f3: ";
	f3->output();
	delete f3;
	f1.setDen(5); //test setter
	f1.setNum(4);
	cout << "f1': ";
	f1.output();
}