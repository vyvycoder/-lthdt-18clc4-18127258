#pragma once
#include <iostream>
#include "Point.h"

class Rectangle
{
private:
	Point _topLeft;
	Point _bottomRight;

public:
	Rectangle();
	Rectangle(Point, Point);
	~Rectangle();
	Point TopLeft() { return _topLeft; };
	Point BottomRight(){ return _bottomRight; };
	void setTopLeft(Point topleft) { _topLeft = topleft; };
	void setBottomRight(Point botright) { _bottomRight = botright; };
};

