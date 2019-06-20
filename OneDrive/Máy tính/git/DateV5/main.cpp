#include "Date.h"

void main() {
	Date d1;
	cout << d1.ToString() << endl;
	Date* d2 = new Date(*Date::Parse(d1.ToString()));
	cout << d2->ToString() << endl;
	cout << Date::isLeapYear(3980) << endl;
	cout << Date::isValidDate(12, 13, 1969) << endl;
	delete d2;
}