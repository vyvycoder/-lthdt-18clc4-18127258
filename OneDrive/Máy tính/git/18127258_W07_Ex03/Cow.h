#pragma once
#include "Animal.h"
class Cow : public Animal
{
public:
	vector<Cow> giveBirth();
	int produceMilk();
	void talk();
};