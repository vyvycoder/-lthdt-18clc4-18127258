#pragma once
#include "DocGia.h"
class DocGiaThuong : public DocGia
{
private:
	int borrowbooks;
public:
	void inputInfo();
	void viewInfo();
	long calcCharge();
};

