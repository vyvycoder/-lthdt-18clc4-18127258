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

Student::~Student()
{
}

void Student::output() {
	cout << _firstName << " " << _middleName << " " << _lastName << endl;
}
