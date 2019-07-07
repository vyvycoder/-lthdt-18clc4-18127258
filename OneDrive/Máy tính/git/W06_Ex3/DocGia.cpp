#include "DocGia.h"
void DocGia::inputInfo() {
	cout << "ID: ";
	cin >> ID;
	cin.ignore();
	cout << "Name: ";
	getline(cin, name);
	cout << "Expired Date: ";
	getline(cin, expireddate);
	cout << "Gender: \n1.Male\n2.Female" << endl;
	cin >> gender;
}
void DocGia::viewInfo() {
	cout << "ID: " << ID << endl;
	cout << "Name: " << name << endl;
	cout << "Expired Date: " << expireddate << endl;
	cout << "Gender: ";
	if (gender == 1)
		cout << "Male" << endl;
	else if (gender == 2)
		cout << "Female" << endl;
	else
		cout << "Other" << endl;
}