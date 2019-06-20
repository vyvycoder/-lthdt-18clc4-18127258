#include "Point.h"

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

Point::Point(float x) {
	_x = x;
	_y = 0;
}
Point::Point(const Point& p) {
	_x = p._x;
	_y = p._y;
}

string Point::ToString() {
	stringstream writer;
	writer << "(" << _x << "," << _y << ")";
	return writer.str();
}

Point* Point::Parse(string line) {
	vector<string> v = Tokenizer::Parse(line, ",");
	v[0] = v[0].substr(1);
	v[1] = v[1].substr(0);
	int x = stoi(v[0]);
	int y = stoi(v[1]);
	Point* ans = new Point(x, y);
	return ans;
}