#include "Goat.h"
vector<Goat> Goat::giveBirth() {
	vector<Goat> babies;
	int a = rand() % 10 + 1;
	for (int i = 0; i < a; i++) {
		Goat baby;
		babies.push_back(baby);
	}
	return babies;
}
int Goat::produceMilk() {
	int a = rand() % 10 + 0;
	milk += a;
	return a;
}
void Goat::talk() {
	cout << "Eeeee" << endl;
}