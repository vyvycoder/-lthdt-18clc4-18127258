#pragma once
#include <string>
#include <iostream>
using namespace std;
class GiaoVien
{
private:
	int ID;
	string name;
	float payrate;
	long basicpay;
	int dayoff;
public:
	void inputInfo();
	void viewInfo();
	long calcSalary();
};

