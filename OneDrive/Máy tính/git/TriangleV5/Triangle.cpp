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

string Triangle::ToString() {
	stringstream writer;
	writer << _a->ToString() << ";" << _b->ToString() << ";" << _c->ToString();
	return writer.str();
}

Triangle* Triangle::Parse(string s) {
	vector<string> v = Tokenizer::Parse(s,";");
	Point* p1 = Point::Parse(v[0]);
	Point* p2 = Point::Parse(v[1]);
	Point* p3 = Point::Parse(v[2]);
	Triangle* ans = new Triangle(p1, p2, p3);
	delete p1;
	delete p2;
	delete p3;
	return ans;
}