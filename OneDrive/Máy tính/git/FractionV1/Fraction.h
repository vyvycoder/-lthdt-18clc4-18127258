#pragma once
#include <iostream>
using namespace std;
class Fraction
{
private:
	int _num;
	int _den;
public:
	Fraction();
	Fraction(int, int);
	~Fraction();
	int num() { return _num; };
	int den() { return _den; };
	void setNum(int value) { _num = value; };
	void setDen(int value) { _den = value; };
	void output();
};

