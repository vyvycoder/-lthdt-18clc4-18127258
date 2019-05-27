#pragma once
#include "Point.h"
#include <iostream>
using namespace std;

class Line {
private:
	Point _start;
	Point _end;
public:
	Point START() { return _start; }
	Point END() { return _end; }
	void setStart(float x, float y);
	void setEnd(float x, float y);
public:
	Line();
	Line(Point, Point);
	~Line();
};