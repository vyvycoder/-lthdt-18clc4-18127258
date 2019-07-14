#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include <ctime>
using namespace std;
class Time
{
protected:
	int m_hour;
	int m_min;
	int m_sec;
public:
	Time();
	Time(int, int, int);
};

