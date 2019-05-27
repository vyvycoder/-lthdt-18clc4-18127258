#pragma once
#include "Point.h"
class Circle
{
private:
	float _radius;
	Point _center;
public:
	Circle();
	Circle(float, Point);
	~Circle();
	float radius() { return _radius; };
	Point center() { return _center; };
	void setRadius(float value);
	void setCenter(Point point);
	void output();
};

