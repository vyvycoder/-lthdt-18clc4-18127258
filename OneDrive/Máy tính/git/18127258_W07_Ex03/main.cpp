#include "Cow.h"
#include "Goat.h"
#include "Sheep.h"

void main() {
	// create a random number of animals
	vector<Cow> cows;
	int a = rand() % 10 + 1;
	for (int i = 0; i < a; i++) {
		Cow cow;
		cows.push_back(cow);
	}
	vector<Goat> goats;
	a = rand() % 10 + 1;
	for (int i = 0; i < a; i++) {
		Goat goat;
		goats.push_back(goat);
	}
	vector<Sheep> sheeps;
	a = rand() % 10 + 1;
	for (int i = 0; i < a; i++) {
		Sheep sheep;
		sheeps.push_back(sheep);
	}
	// The boss has gone away, all animals talk
	for (int i = 0; i < cows.size(); i++)
		cows[i].talk();
	for (int i = 0; i < goats.size(); i++)
		goats[i].talk();
	for (int i = 0; i < sheeps.size(); i++)
		sheeps[i].talk();
	// Report after 1 time all animals give birth and produce milk
	int total_milk = 0;
	int firstcowsnum = cows.size();
	int firstgoatssnum = goats.size();
	int firstsheepsnum = sheeps.size();
	for (int i = 0; i < firstcowsnum; i++) {
		total_milk += cows[i].produceMilk();
		vector<Cow> chidren = cows[i].giveBirth();
		cows.insert(cows.end(),chidren.begin(), chidren.end());
	}
	for (int i = 0; i < firstgoatssnum; i++) {
		total_milk += goats[i].produceMilk();
		vector<Goat> chidren = goats[i].giveBirth();
		goats.insert(goats.end(), chidren.begin(), chidren.end());
	}
	for (int i = 0; i < firstsheepsnum; i++) {
		total_milk += sheeps[i].produceMilk();
		vector<Sheep> chidren = sheeps[i].giveBirth();
		sheeps.insert(sheeps.end(), chidren.begin(), chidren.end());
	}
	cout << "Total milk: " << total_milk << endl;
	cout << "Number of cows: " << cows.size() << endl;
	cout << "Number of goats: " << goats.size() << endl;
	cout << "Number of sheeps: " << sheeps.size() << endl;
}