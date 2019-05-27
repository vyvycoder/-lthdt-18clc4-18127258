// LineV1.cpp : This file contains the 'main' function.
//
#include "Line.h"
#include <iostream>
using namespace std;

int main()
{
	Line root; //Test tạo hàm không đối
	cout << "Root: (" << root.START().X() << "," << root.START().Y() << ")(" << root.END().X() << "," << root.END().Y() <<")"<<endl;
	Point start(1,2), end(3,4);
	Line node(start, end);	//Test tạo hàm có đối số
	cout << "Node: (" << node.START().X() << "," << node.START().Y() << ")(" << node.END().X() << "," << node.END().Y() << ")" << endl;
	Line* l = new Line(start, end);	//Test việc cấp phát thủ công
	cout << "Node: (" << l->START().X() << "," << l->START().Y() << ")(" << l->END().X() << "," << l->END().Y() << ")" << endl;
	delete l;
	root.setStart(1, 2);	//Test hàm setStart(), setEnd()
	root.setEnd(3, 4);	
	cout << "Root: (" << root.START().X() << "," << root.START().Y() << ")(" << root.END().X() << "," << root.END().Y() << ")" << endl;
}

