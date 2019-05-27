#include "Rectangle.h"


Rectangle::Rectangle()
{
	_topLeft = Point(0, 0);
	_bottomRight = Point(1, 1);
}

Rectangle::Rectangle(Point top, Point bot) {
	_topLeft = top;
	_bottomRight = bot;
}

Rectangle::~Rectangle()
{
}
