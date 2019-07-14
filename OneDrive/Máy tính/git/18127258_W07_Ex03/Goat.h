#pragma once
#include "Animal.h"
class Goat : public Animal
{
public:
	vector<Goat> giveBirth();
	int produceMilk();
	void talk();
};