#include "Rectangle.h"


Rectangle::Rectangle()
{
	_topLeft = new Point(1, 1);
	_bottomRight = new Point(10, 10);
}

Rectangle::Rectangle(Point* top, Point *bot) {
	_topLeft = new Point(*top);
	_bottomRight = new Point(*bot);
}

Rectangle::~Rectangle()
{
	delete _topLeft;
	delete _bottomRight;
}

Rectangle::Rectangle(Point* topLeft) {
	_topLeft = new Point(*topLeft);
	_bottomRight = new Point(1, 1);
}

Rectangle::Rectangle(const Rectangle& f) {
	this->_topLeft = new Point(*f._topLeft);
	this->_bottomRight = new Point(*f._bottomRight);
}

float Rectangle::calcPerimeter() {
	return (abs(_topLeft->X() - _bottomRight->X()) + abs(_topLeft->Y() - _bottomRight->Y())) / 2;
}
float Rectangle::calcArea() {
	return (abs(_topLeft->X() - _bottomRight->X()) * abs(_topLeft->Y() - _bottomRight->Y()));
}
void Rectangle::output() {
	cout << "Rectangle: (" << this->_topLeft->X() << "," << this->_topLeft->Y() << ")(" << this->_bottomRight->X() << "," << this->_bottomRight->Y() << ")" << endl;
}

void Rectangle::setTopLeft(Point* topleft) { 
	delete _topLeft;
	_topLeft = new Point(*topleft); 
}

void Rectangle::setBottomRight(Point* botright) {
	delete _bottomRight;
	_bottomRight = new Point (*botright); 
}