#define _CRT_SECURE_NO_WARNINGS
#include "Date.h"

Date daysToDate(int day) {
	Date d;
	int months[13] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
	int daysOf100years = 24 * 366 + 76 * 365;
	int daysOf400years = 365 * (400 - 97) + 366 * 97;
	int year = 400 * (day / daysOf400years);
	day = day % daysOf400years;
	year += 100 * (day / daysOf100years);
	day = day % daysOf100years;
	year += (day / (365 * 4 + 1)) * 4;
	day = day % (365 * 4 + 1);
	year += day / 365 + 1;
	day = day % 365;
	if (day == 0) {
		d._day = 31;
		d._month = 12;
		d._year = year - 1;
		return d;
	}
	if (Date::isLeapYear(year))
		months[3] = 60;
	d._month = 1;
	while (months[d._month] < day) {
		// Figure out the correct month.
		d._month++;
	}

	// Get the day thanks to the months array
	d._day = day - months[d._month - 1];
	d._year = year;
	return d;
}

Date::Date() {
	time_t now = time(0);
	tm* t = new tm(*localtime(&now));
	_day = t->tm_mday;
	_month = t->tm_mon + 1;
	_year = t->tm_year + 1900;
	delete t;
}

Date::~Date() {

};

Date::Date(int year) {
	_day = 1;
	_month = 1;
	_year = year;
}
Date::Date(int year, int month) {
	if (month > 12)
		throw "INVALID MONTH";
	_day = 1;
	_month = month;
	_year = year;
}
Date::Date(int year, int month, int day) {
	if (!Date::isValidDate(day,month,year))
		throw "INVALID MONTH";
	_day = day;
	_month = month;
	_year = year;
}
Date::Date(const Date& d) {
	_day = d._day;
	_month = d._month;
	_year = d._year;
}
Date& Date::operator =(Date d) {
	_day = d._day;
	_month = d._month;
	_year = d._year;
	return *this;
}
Date Date::Tomorrow() {
	return daysToDate((long)* this + 1);
}
Date Date::Yesterday() {
	return daysToDate((long)* this - 1);			
}
Date Date::operator +(int day) {
	return daysToDate((long)* this + day);
}
Date Date::operator -(int day) {
	return daysToDate((long)* this - day);
}
Date& Date::operator ++() {
	*this = daysToDate((long)* this + 1);
	return *this;
}
Date Date::operator ++(int fake) {
	Date temp = *this;
	*this = daysToDate((long)* this + 1);
	return temp;
}
Date& Date::operator --() {
	*this = daysToDate((long)* this - 1);
	return *this;
}
Date Date::operator --(int fake) {
	Date temp = *this;
	*this = daysToDate((long)* this + 1);
	return temp;
}
Date& Date::operator +=(int day) {
	*this = daysToDate((long)* this + day);
	return *this;
}
Date& Date::operator -=(int day) {
	*this = daysToDate((long)* this - day);
	return *this;
}
bool Date::operator ==(Date d) {
	return _day == d._day && _month == d._month && _year == d._year;
}
bool Date::operator >(Date d) {
	return (long)* this > (long)d;
}
bool Date::operator <(Date d) {
	return (long)* this < (long)d;
}
bool Date::operator !=(Date d) {
	return (long)* this != (long)d;
}
bool Date::operator >=(Date d) {
	return (long)* this >= (long)d;
}
bool Date::operator <=(Date d) {
	return (long)* this <= (long)d;
}

istream& operator >>(istream& is, Date& d) {
	cout << "Input a date: ";
	is >> d._day >> d._month >> d._year;
	if (!Date::isValidDate(d._day, d._month, d._year))
		throw "INVALID DATE";
	return is;
}
Date::operator int() {
	int days = _day;
	for (int i = 1; i < _month; i++) {
		switch (_month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		{
			days += 31;
			break;
		}
		case 2:
		{
			if (Date::isLeapYear(_year))
				days += 29;
			else
				days += 28;
			break;
		}
		default: {
			days += 30;
			break;
		}
		}
	}
	return days;
}
Date::operator long() {
	int days = (int)*this;
	int special = 
	days += (_year - 1) / 4 * (365 * 4 + 1) - (_year - 1) / 400 * 3;
	days += (_year - 1) % 4 * 365;
	return days;
}


ostream& operator <<(ostream& os, const Date& d) {
	os << d._day << "/" << d._month << "/" << d._year;
	return os;
}

bool Date::isValidDate(int day, int month, int year) {
	if (day < 0 || month < 0)
		return false;
	switch (month)
	{
	case 1: 
	case 3: 
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return (day <= 31);
	case 2:
	{
		if (Date::isLeapYear(year))
			return day <= 29;
		return day < 29;
	}
	case 4:
	case 6:
	case 9:
	case 11:
		return (day < 31);
	default:
		return false;
	}
}

bool Date::isLeapYear(int year) {
	if (year % 4 == 0) {
		if (year % 100 == 0)
			return year % 400 == 0;
		return true;
	}
}

string Date::ToString() {
	stringstream writer;
	writer << _day << "/" << _month << "/" << _year;
	return writer.str();
}
Date* Date::Parse(string s) {
	vector<string> v = Tokenizer::Parse(s, "/");
	Date* d = new Date(stoi(v[2]), stoi(v[1]), stoi(v[0]));
	return d;
}