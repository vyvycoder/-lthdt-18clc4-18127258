#include "Triangle.h"



Triangle::Triangle()
{
	_a = Point(0, 0);
	_b = Point(0, 0);
	_c = Point(0, 0);
}

Triangle::Triangle(Point a, Point b, Point c) {
	_a = a;
	_b = b;
	_c = c;
}


Triangle::~Triangle()
{
}
