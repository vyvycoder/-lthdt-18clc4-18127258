#include "Fraction.h"


Fraction::Fraction()
{
	m_num = 0;
	m_denom = 1;
}


Fraction::~Fraction()
{
}

Fraction::Fraction(int nu, int de) {
	m_num = nu;
	m_denom = de;
}
Fraction::Fraction(const Fraction& f) {
	m_num = f.m_num;
	m_denom = f.m_denom;
}
float Fraction::value() {
	return m_num * 1.0 / m_denom;
}
//Arithmetic
Fraction Fraction::operator +(Fraction f) {
	Fraction sum;
	sum.m_num = m_num * f.m_denom + f.m_num * m_denom;
	sum.m_denom = m_denom * f.m_denom;
	return sum;
}

Fraction Fraction::operator +(int number) {
	Fraction sum;
	sum.m_num = m_num + number * m_denom;
	sum.m_denom = m_denom;
	return sum;
}
Fraction Fraction::operator *(Fraction f) {
	Fraction res;
	res.m_num = m_num * f.m_num;
	res.m_denom = m_denom * f.m_denom;
	return res;
}

Fraction Fraction::operator *(int number) {
	Fraction res;
	res.m_num = m_num * number;
	res.m_denom = m_denom ;
	return res;
}


Fraction Fraction::operator -(Fraction f) {
	Fraction res;
	res.m_num = m_num * f.m_denom - f.m_num * m_denom;
	res.m_denom = m_denom * f.m_denom;
	return res;
}

Fraction Fraction::operator -(int number) {
	Fraction sum;
	sum.m_num = m_num - number * m_denom;
	sum.m_denom = m_denom;
	return sum;
}

Fraction Fraction::operator / (Fraction f) {
	if (f.m_num == 0)
		throw "Divide by zero exception";
	Fraction res;
	res.m_num = m_num * f.m_denom;
	res.m_denom = m_denom * f.m_num;
	return res;
}

Fraction operator +(int number, Fraction f) {
	Fraction sum;
	sum.m_num = f.m_num + number * f.m_denom;
	sum.m_denom = f.m_denom;
	return sum;
}
Fraction operator *(int number, Fraction f) {
	Fraction res;
	res.m_num = f.m_num * number;
	res.m_denom = f.m_denom;
	return res;
}

//Comparison
bool Fraction::operator >(Fraction f) {
	return this->value() > f.value();
}
bool Fraction::operator <(Fraction f) {
	return this->value() < f.value();
}
bool Fraction::operator ==(Fraction f) {
	return this->value() == f.value();
}
bool Fraction::operator >=(Fraction f) {
	return this->value() >= f.value();
}
bool Fraction::operator <=(Fraction f) {
	return this->value() <= f.value();
}
bool Fraction::operator !=(Fraction f) {
	return this->value() != f.value();
}
//Assignment
Fraction& Fraction::operator =(Fraction f) {
	m_num = f.m_num;
	m_denom = f.m_denom;
	return *this;
}
Fraction& Fraction::operator +=(Fraction f) {
	m_num = m_num * f.m_denom + f.m_num * m_denom;
	m_denom = m_denom * f.m_denom;
	return *this;
}
Fraction& Fraction::operator -=(Fraction f) {
	m_num = m_num * f.m_denom - f.m_num * m_denom;
	m_denom = m_denom * f.m_denom;
	return *this;
}
Fraction& Fraction::operator *=(Fraction f) {
	m_num = m_num * f.m_num;
	m_denom = m_denom * f.m_denom;
	return *this;
}
Fraction& Fraction::operator /=(Fraction f) {
	if (f.m_num == 0)
		throw "Divide by zero exception";
	m_num = m_num * f.m_denom;
	m_denom = m_denom * f.m_num;
	return *this;
}
Fraction& Fraction::operator ++() {
	m_num += m_denom;
	return *this;
}
Fraction Fraction::operator ++(int x) {
	Fraction temp = *this;
	m_num += m_denom;
	return temp;
}
Fraction& Fraction::operator --() {
	m_num -= m_denom;
	return *this;
}
Fraction Fraction::operator --(int x){
	Fraction temp = *this;
	m_num -= m_denom;
	return temp;
}
Fraction::operator float(){
	return this->value();
}

ostream& operator<<(ostream& os, const Fraction& f) {
	os << f.m_num << "/" << f.m_denom;
	return os;
}