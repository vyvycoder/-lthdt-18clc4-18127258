#include "Triangle.h"



Triangle::Triangle()
{
	_a = new Point(Point(1, 1));
	_b = new Point(Point(1, 2));
	_c = new Point(Point(4, 2));
}

Triangle::Triangle(Point* a, Point* b, Point* c) {
	_a = new Point(*a);
	_b = new Point(*b);
	_c = new Point(*c);
}

Triangle::Triangle(Point* a) {
	_a = new Point(*a);
	_b = new Point(Point(0, 0));
	_c = new Point(Point(1, 1));
}

Triangle::Triangle(const Triangle& t) {
	_a = new Point(*t._a);
	_b = new Point(*t._b);
	_c = new Point(*t._c);
}

Triangle::~Triangle()
{
	delete _a;
	delete _b;
	delete _c;
}

float Triangle::calcPeremeter() {
	return _a->distanceTo(*_b) + _b->distanceTo(*_c) + _c->distanceTo(*_a);
}
float Triangle::calcArea() {
	Point mid((_b->X() + _c->X()) / 2, (_b->Y() + _c->Y()) / 2);
	return 0.5* _a->distanceTo(mid)* _b->distanceTo(*_c);
}

void Triangle::output() {
	_a->output();
	_b->output();
	_c->output();
	cout << endl;
}