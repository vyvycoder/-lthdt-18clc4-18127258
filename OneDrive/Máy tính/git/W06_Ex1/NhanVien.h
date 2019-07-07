#pragma once
#include <string>
#include <iostream>
using namespace std;
class NhanVien
{
protected:
	int _ID;
	string _name;
	string _DOB;
	string _address;
public:
	void inputInfo();
	void viewInfo();
};

