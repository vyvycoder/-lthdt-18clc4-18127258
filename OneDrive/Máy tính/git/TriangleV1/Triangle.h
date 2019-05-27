#pragma once
#include "Point.h"
class Triangle
{
private:
	Point _a;
	Point _b;
	Point _c;

public:
	Triangle();
	Triangle(Point, Point, Point);
	~Triangle();
	Point A() { return _a; };
	Point B() { return _b; };
	Point C() { return _c; };
	void setA(Point value) { _a = value; };
	void setB(Point value) { _b = value; };
	void setC(Point value) { _c = value; };
};

