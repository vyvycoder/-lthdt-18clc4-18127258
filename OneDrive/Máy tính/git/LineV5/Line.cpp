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

Line::Line(Point start) {
	this->_start = start;
	this->_end = Point(0, 0);
}
Line::Line(const Line& l) {
	this->_start = l._start;
	this->_end = l._end;
}
string Line::ToString() {
	stringstream writer;
	writer << _start.ToString()<< ";" << _end.ToString();
	return writer.str();
}

Line* Line::Parse(string s) {
	vector<string> v = Tokenizer::Parse(s,";");
	Point* p1 = Point::Parse(v[0]);
	Point* p2 = Point::Parse(v[1]);
	Line* ans = new Line(*p1, *p2);
	delete p1;
	delete p2;
	return ans;
}

