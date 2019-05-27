#include "Circle.h"



Circle::Circle()
{
	_radius = 0;
	_center = Point(0, 0);
}

Circle::Circle(float r, Point p)
{
	_radius = r;
	_center = p;
}


Circle::~Circle()
{
}

void Circle::setRadius(float value) {
	_radius = value;
}
void Circle::setCenter(Point point) {
	_center = point;
}

void Circle::output() {
	cout << "Radius: " << _radius << endl;
	cout << "Center: (" << _center.X() << "," << _center.Y() << ")" << endl;
}