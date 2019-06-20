#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "Tokenizer.h"
using namespace std;

class Point {
private:
	float _x;
	float _y;
public:
	float X() { return _x; }
	float Y() { return _y; }
	void SetX(float value) { _x = value; }
	void SetY(float value) { _y = value; }
public:
	Point();
	Point(float, float);
	Point(float x);
	Point(const Point& p);
	~Point();
	string ToString();
	static Point* Parse(string line);
};