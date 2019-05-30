#pragma once
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
	string _firstName;
	string _middleName;
	string _lastName;

public:
	Student();
	Student(string, string, string);
	Student(string firstname);
	Student(const Student& s);
	~Student();
	string FirstName() { return _firstName; };
	string MiddleName() { return _middleName; };
	string LastName() { return _lastName; };
	void setFirstName(string name) { _firstName = name; };
	void setMiddleName(string name) { _middleName = name; };
	void setLastName(string name) { _lastName = name; };
	void output();
	string Fullname();
};

