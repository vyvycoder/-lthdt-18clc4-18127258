#include "NhanVien.h"

void NhanVien::inputInfo() {
	cout << "ID:";
	cin >> _ID;
	cout << "Name: ";
	cin.ignore();
	getline(cin, _name);
	cout << "DOB: ";
	getline(cin, _DOB);
	cout << "Address: ";
	getline(cin, _address);
}
void NhanVien::viewInfo() {
	cout << "ID: " << _ID << endl;
	cout << "Name: " << _name << endl;
	cout << "DOB: " << _DOB << endl;
	cout << "Address: " << _address << endl;
}
