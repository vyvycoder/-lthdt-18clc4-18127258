#include "GmtTime.h"

void main() {
	GmtTime t1;
	t1.ToString(7);
	cout << endl;
	GmtTime t2(13, 4, 62);
	t2.ToString(0);

}