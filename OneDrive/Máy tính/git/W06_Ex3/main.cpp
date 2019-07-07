#include "DocGiaThuong.h"
#include "DocGiaVip.h"

void main() {
	DocGiaThuong dg1;
	DocGiaVip dg2;
	dg1.inputInfo();
	dg1.viewInfo();
	cout << "Charge: " << dg1.calcCharge() << endl;
	dg2.inputInfo();
	dg2.viewInfo();
	cout << "Charge: " << dg2.calcCharge() << endl;
}