#include "DocGiaThuong.h"
void DocGiaThuong::inputInfo() {
	DocGia::inputInfo();
	cout << "Borrowed books: ";
	cin >> borrowbooks;
}
void DocGiaThuong::viewInfo() {
	DocGia::viewInfo();
	cout << "Borrowed books: " << borrowbooks << endl;
}
long DocGiaThuong::calcCharge() {
	return borrowbooks * 5000;
}