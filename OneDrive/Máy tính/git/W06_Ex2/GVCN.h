#pragma once
#include "GiaoVien.h"
class GVCN : public GiaoVien
{
private:
	string lopchunhiem;
public:
	void inputInfo();
	void viewInfo();
	long calcSalary();
};

