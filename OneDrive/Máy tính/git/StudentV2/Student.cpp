#include "Student.h"



Student::Student()
{
	_firstName = "John";
	_middleName = "Von";
	_lastName = "Neumann";
}

Student::Student(string f, string m, string l) {
	_firstName = f;
	_middleName = m;
	_lastName = l;
}

Student::Student(string firstname) {
	_firstName = firstname;
	_middleName = "Van";
	_lastName = "Nguyen";
}
Student::Student(const Student& s)
{
	_firstName = s._firstName;
	_middleName = s._middleName;
	_lastName = s._lastName;
}

Student::~Student()
{
}

void Student::output() {
	cout << this->Fullname() << endl;
}

string Student::Fullname() {
	return _firstName + " " + _middleName + " " + _lastName;
}