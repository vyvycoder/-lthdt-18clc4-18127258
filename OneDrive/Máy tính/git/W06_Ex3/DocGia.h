#pragma once
#include <string>
#include <iostream>
using namespace std;
class DocGia
{
private:
	int ID;
	string name;
	string expireddate;
	int gender;
public:
	void inputInfo();
	void viewInfo();
};

