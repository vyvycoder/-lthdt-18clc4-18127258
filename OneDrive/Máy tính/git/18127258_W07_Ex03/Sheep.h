#pragma once
#include "Animal.h"
class Sheep : public Animal
{
public:
	vector<Sheep> giveBirth();
	int produceMilk();
	void talk();
};

