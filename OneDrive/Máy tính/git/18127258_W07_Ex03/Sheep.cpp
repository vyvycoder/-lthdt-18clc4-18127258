#include "Sheep.h"
vector<Sheep> Sheep::giveBirth() {
	vector<Sheep> babies;
	int a = rand() % 10 + 1;
	for (int i = 0; i < a; i++) {
		Sheep baby;
		babies.push_back(baby);
	}
	return babies;
}
int Sheep::produceMilk() {
	int a = rand() % 5 + 0;
	milk += a;
	return a;
}
void Sheep::talk() {
	cout << "Beeee" << endl;
}