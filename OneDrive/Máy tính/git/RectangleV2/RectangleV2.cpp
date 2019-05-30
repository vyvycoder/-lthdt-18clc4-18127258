#include "Rectangle.h"
#include <iostream>

int main()
{
	Rectangle r1;	
	r1.output();
	Point* p1 = new Point(5, 5);
	Point* p2 = new Point(10, 10);
	Rectangle r2(p1, p2);
	r2.output();
	Rectangle r3(p1);
	r3.output();
	Rectangle r4(r1);
	r4.output();
	cout << "r1 peremeter: " << r1.calcPerimeter() << endl;
	cout << "r1 area: " << r1.calcArea() << endl;
	delete p1;
	delete p2;
}
