#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
	Circle c1; // test tạo hàm không đối
	cout << "C1:" << endl;
	c1.output();
	Circle c2(3.5,Point(4,5)); // test tạo hàm có đối số
	cout << "C2:" << endl;
	c2.output();
	Circle* c3 = new Circle(2.5, Point(6, 7));	//test việc cấp phát thủ công
	cout << "C3:" << endl;
	cout << "Radius: " << c3->radius() << endl;
	cout << "Center: (" << c3->center().X() << "," << c3->center().Y() << ")" << endl;
	c1.setRadius(1.3); //test setter
	c1.setCenter(Point(6, 2));
	cout << "C1':" << endl;
	c1.output();
	delete c3;
}

