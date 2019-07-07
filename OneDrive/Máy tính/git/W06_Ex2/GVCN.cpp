#include "GVCN.h"
void GVCN::inputInfo() {
	GiaoVien::inputInfo();
	cout << "Lop chu nhiem: ";
	getline(cin,lopchunhiem);
}
void GVCN::viewInfo() {
	GiaoVien::viewInfo();
	cout << "Lop chu nhiem: " << lopchunhiem << endl;
}
long GVCN::calcSalary() {
	return GiaoVien::calcSalary() + 500000;
}