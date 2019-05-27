#include "Triangle.h"
#include <iostream>

int main()
{
    Triangle tri1;	//test tạo hàm không đối
	cout << "tri1: (" << tri1.A().X() << "," << tri1.A().Y() << ")(" << tri1.B().X() << "," << tri1.B().Y() << ")(" << tri1.C().X() << "," << tri1.C().Y() << ")" << endl;
	Triangle tri2(Point(1, 2), Point(3, 4), Point(5,5));	//test tạo hàm có đối số
	cout << "tri2: (" << tri2.A().X() << "," << tri2.A().Y() << ")(" << tri2.B().X() << "," << tri2.B().Y() << ")(" << tri2.C().X() << "," << tri2.C().Y() << ")" << endl;
	Triangle* tri3 = new Triangle(Point(3, 3), Point(5, 5), Point(10,7));	//set việc cấp phát thủ công
	cout << "tri3: (" << tri3->A().X() << "," << tri3->A().Y() << ")(" << tri3->B().X() << "," << tri3->B().Y() << ")(" << tri3->C().X() << "," << tri3->C().Y() << ")" << endl;
	delete tri3;
	tri1.setA(Point(5, 5));	//test hàm setA() setB() setC()
	tri1.setB(Point(6, 9));
	tri1.setC(Point(5, 8));
	cout << "tri1: (" << tri1.A().X() << "," << tri1.A().Y() << ")(" << tri1.B().X() << "," << tri1.B().Y() << ")(" << tri1.C().X() << "," << tri1.C().Y() << ")" << endl;
}

