#include "Point.h"
#include <cmath>

Point::Point() {
	this->_x = 0;
	this->_y = 0;
}

Point::Point(float x, float y) {
	this->_x = x;
	this->_y = y;
}

Point::~Point() {

}


float Point::distanceTo(Point p) {
	return sqrt(1.0 * (pow(_x - p._x, 2) + pow(_y - p._y, 2)));
}

void Point::output(){
	cout << "(" << _x << "," << _y << ") ";
}