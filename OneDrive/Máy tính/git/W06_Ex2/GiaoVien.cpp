#include "GiaoVien.h"

void GiaoVien::inputInfo() {
	cout << "ID:";
	cin >> ID;
	cin.ignore();
	cout << "Name: ";
	getline(cin, name);
	cout << "Pay rate: ";
	cin >> payrate;
	cout << "Basic pay: ";
	cin >> basicpay;
	cout << "Day-off: ";
	cin >> dayoff;
}
void GiaoVien::viewInfo() {
	cout << "ID:" << ID << endl;
	cout << "Name: " << name << endl;
	cout << "Pay rate: " << payrate <<endl;
	cout << "Basic pay: " << basicpay << endl;
	cout << "Day-off: " << dayoff << endl;
}
long GiaoVien::calcSalary() {
	return payrate * basicpay - dayoff * 100000;
}