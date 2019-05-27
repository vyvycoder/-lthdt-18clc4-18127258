#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle rec1;	//test tạo hàm không đối
	cout << "rec1: (" << rec1.TopLeft().X() << "," << rec1.TopLeft().Y() << ")(" << rec1.BottomRight().X() << "," << rec1.BottomRight().Y() << ")" << endl;
	Rectangle rec2(Point(1,2),Point(3,4));	//test tạo hàm có đối số
	cout << "rec2: (" << rec2.TopLeft().X() << "," << rec2.TopLeft().Y() << ")(" << rec2.BottomRight().X() << "," << rec2.BottomRight().Y() << ")" << endl;
	Rectangle* rec3 = new Rectangle(Point(3, 3), Point(5, 5));	//set việc cấp phát thủ công
	cout << "rec3: (" << rec3->TopLeft().X() << "," << rec3->TopLeft().Y() << ")(" << rec3->BottomRight().X() << "," << rec3->BottomRight().Y() << ")" << endl;
	delete rec3;
	rec1.setTopLeft(Point(5, 5));	//test hàm setTopLeft() setBottomRight()
	rec1.setBottomRight(Point(6, 9));
	cout << "rec1: (" << rec1.TopLeft().X() << "," << rec1.TopLeft().Y() << ")(" << rec1.BottomRight().X() << "," << rec1.BottomRight().Y() << ")" << endl;
}
