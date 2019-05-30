// TriangleV2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Triangle.h"
using namespace std;

int main()
{
	Triangle tr1;
	tr1.output();
	Point* p1, * p2, * p3;
	p1 = new Point(Point(1, 1));
	p2 = new Point(Point(2, 2));
	p3 = new Point(Point(3, 1));
	Triangle tr2(p1, p2, p3);
	tr2.output();
	Triangle tr3(p1);
	tr3.output();
	Triangle tr4(p2);
	tr4.output();
	delete p1;
	delete p2;
	delete p3;
}

