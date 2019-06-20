#include "Triangle.h"

void main() {
	Triangle t1;
	cout << t1.ToString() << endl;
	cout << "After parse: " << endl;
	Triangle* t2 = new Triangle(*Triangle::Parse(t1.ToString()));
	cout << t2->ToString();
	delete t2;
}