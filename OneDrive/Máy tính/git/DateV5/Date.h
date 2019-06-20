#pragma once
#include <iostream>
#include <ctime>
#include <sstream>
#include "Tokenizer.h"
using namespace std;

class Date
{
private:
	int _day;
	int _month;
	int _year;
public:
	Date();
	Date(int year);
	Date(int year, int month);
	Date(int year, int month, int day);
	Date(const Date& d);
	~Date();
	Date& operator =(Date d);
	Date Tomorrow();
	Date Yesterday();
	Date operator +(int day);
	Date operator -(int day);
	Date& operator ++();
	Date operator ++(int fake);
	Date& operator --();
	Date operator --(int fake);
	Date& operator +=(int day);
	Date& operator -=(int day);
	bool operator ==(Date d);
	bool operator >(Date d);
	bool operator <(Date d);
	bool operator !=(Date d);
	bool operator >=(Date d);
	bool operator <=(Date d);
	friend ostream& operator <<(ostream& os,const Date& d);
	friend istream& operator >>(istream& is, Date& d);
	operator int();
	operator long();
	friend Date daysToDate(int day);
	static bool isValidDate(int day, int month, int year);
	static bool isLeapYear(int year);
	string ToString();
	static Date* Parse(string s);
};
