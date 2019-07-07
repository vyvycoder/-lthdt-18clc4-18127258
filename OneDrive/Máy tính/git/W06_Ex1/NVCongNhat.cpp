#include "NVCongNhat.h"


long NVCongNhat::calc() {
	return _days * 300000;
}

void NVCongNhat::viewInfo() {
	NhanVien::viewInfo();
	cout << "Days: " << _days << endl;
}

void NVCongNhat::inputInfo() {
	NhanVien::inputInfo();
	cout << "Days: ";
	cin >> _days;
}