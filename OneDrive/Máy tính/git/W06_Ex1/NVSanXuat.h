#pragma once
#include "NhanVien.h"
class NVSanXuat: public NhanVien
{
private:
	int _products;
public:
	long calc();
	void viewInfo();
	void inputInfo();
};

