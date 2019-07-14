#include "Cow.h"
vector<Cow> Cow::giveBirth() {
	vector<Cow> babies;
	int a = rand() % 10 + 1;
	for (int i = 0; i < a; i++) {
		Cow baby;
		babies.push_back(baby);
	}
	return babies;
}
int Cow::produceMilk() {
	int a = rand() % 20 + 0;
	milk += a;
	return a;
}
void Cow::talk() {
	cout << "Mowww" << endl;
}