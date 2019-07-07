#include "GVCN.h"

void main() {
	GiaoVien gv1;
	GVCN gv2;
	gv1.inputInfo();
	gv1.viewInfo();
	cout << "GV1 salary:" << gv1.calcSalary() << endl;
	gv2.inputInfo();
	gv2.viewInfo();
	cout << "GV2 salary:" << gv2.calcSalary() << endl;
}