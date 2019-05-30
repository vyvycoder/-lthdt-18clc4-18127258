#pragma once
#include <iostream>
#include "Point.h"

class Rectangle
{
private:
	Point* _topLeft;
	Point* _bottomRight;

public:
	Rectangle();
	Rectangle(Point*, Point*);
	Rectangle(const Rectangle& f);
	Rectangle(Point *topleft);
	~Rectangle();
	Point* TopLeft() { return _topLeft; };
	Point* BottomRight(){ return _bottomRight; }; 
	void setTopLeft(Point *topleft);
	void setBottomRight(Point *botright);
	float calcPerimeter();
	float calcArea();
	void output();
};

