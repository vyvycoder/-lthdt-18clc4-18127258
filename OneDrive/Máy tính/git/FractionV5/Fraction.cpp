#include "Fraction.h"

Fraction::Fraction() {
	_num = 0;
	_den = 1;
}

Fraction::Fraction(int x, int y) {
	_num = x;
	_den = y;
}

Fraction::~Fraction() {

}

void Fraction::output() {
	cout << _num << "/" << _den << endl;
}

string Fraction::ToString() {
	stringstream writer;
	writer << _num << "/" << _den;
	return writer.str();
}
Fraction* Fraction::Parse(string s) {
	vector<string> v = Tokenizer::Parse(s, "/");
	Fraction* f = new Fraction(stoi(v[0]), stoi(v[1]));
	return f;
}