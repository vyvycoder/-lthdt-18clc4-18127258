#pragma once
#include "Point.h"
class Triangle
{
private:
	Point* _a;
	Point* _b;
	Point* _c;

public:
	Triangle();
	Triangle(Point*, Point*, Point*);
	Triangle(Point* a);
	Triangle(const Triangle& p);
	~Triangle();
	Point A() { return *_a; };
	Point B() { return *_b; };
	Point C() { return *_c; };
	void setA(Point* value) { _a = new Point(*value); };
	void setB(Point* value) { _b = new Point(*value); };
	void setC(Point* value) { _c = new Point(*value); };
	string ToString();
	static Triangle* Parse(string s);
};

