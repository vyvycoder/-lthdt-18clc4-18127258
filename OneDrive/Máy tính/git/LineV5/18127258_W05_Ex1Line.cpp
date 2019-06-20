#include "Line.h"

int main()
{
	Line p1;
	Line p2(Point(2, 3),Point(0,4));
	Line p3(Point(5, 3));
	Line p4(p2);
	Line* p5 = new Line(Point(3, 3), Point(6, 4));
	cout << p1.ToString() << endl;
	cout << p2.ToString() << endl;
	cout << p3.ToString() << endl;
	cout << p4.ToString() << endl;
	cout << p5->ToString() << endl;
	Line* p6 = new Line(*Line::Parse(p5->ToString()));
	cout << "After parse: " << endl;
	cout << p6->ToString() << endl;
	delete p5;
	delete p6;
}

