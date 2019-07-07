#include "NVSanXuat.h"

long NVSanXuat::calc() {
	return _products * 20000;
}

void NVSanXuat::viewInfo() {
	NhanVien::viewInfo();
	cout << "Products: " << _products << endl;
}

void NVSanXuat::inputInfo() {
	NhanVien::inputInfo();
	cout << "Products: ";
	cin >> _products;
}