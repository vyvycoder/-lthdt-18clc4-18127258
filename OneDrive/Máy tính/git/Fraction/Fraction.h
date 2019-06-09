#pragma once
#include <iostream>
using namespace std;
class Fraction
{
	int m_num;
	int m_denom;
public:
	Fraction();
	Fraction(int, int);
	Fraction(const Fraction& f);
	~Fraction();
	float value();
	//Arithmetic
	Fraction operator +(Fraction f);
	Fraction operator +(int number);
	Fraction operator *(Fraction f);
	Fraction operator *(int number);
	Fraction operator -(Fraction f);
	Fraction operator -(int number);
	Fraction operator /(Fraction f);
	friend Fraction operator +(int number, Fraction f);
	friend Fraction operator *(int number, Fraction f);
	//Comparison
	bool operator >(Fraction f);
	bool operator <(Fraction f);
	bool operator ==(Fraction f);
	bool operator >=(Fraction f);
	bool operator <=(Fraction f);
	bool operator !=(Fraction f);
	//Assignment
	Fraction& operator =(Fraction f);
	Fraction& operator +=(Fraction f);
	Fraction& operator -=(Fraction f);
	Fraction& operator *=(Fraction f);
	Fraction& operator /=(Fraction f);
	Fraction& operator ++();
	Fraction operator ++(int x);
	Fraction& operator --();
	Fraction operator --(int x);
	operator float();
	friend ostream& operator<<(ostream& os, const Fraction& f);
};

