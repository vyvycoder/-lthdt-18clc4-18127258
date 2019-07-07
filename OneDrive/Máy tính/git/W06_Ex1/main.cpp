#include "NVCongNhat.h"
#include "NVSanXuat.h"

void main() {
	NVCongNhat nv1;
	NVSanXuat nv2;
	nv1.inputInfo();
	nv1.viewInfo();
	cout << "Salary: " << nv1.calc() << endl;
	nv2.inputInfo();
	nv2.viewInfo();
	cout << "Salary: " << nv2.calc() << endl;
}