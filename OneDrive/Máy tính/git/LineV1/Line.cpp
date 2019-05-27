#include "Line.h"

void Line::setStart(float x, float y) {
	this->_start.SetX(x);
	this->_start.SetY(y);
}
void Line::setEnd(float x, float y) {
	this->_end.SetX(x);
	this->_end.SetY(y);
}
Line::Line() {
	this->setStart(0, 0);
	this->setEnd(0, 0);
}
Line::Line(Point start, Point end) {
	this->_start = start;
	this->_end = end;
}
Line::~Line() {

}