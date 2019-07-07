#pragma once
#include "NhanVien.h"
class NVCongNhat:public NhanVien
{
private:
	int _days;
public:
	long calc();
	void viewInfo();
	void inputInfo();
};

