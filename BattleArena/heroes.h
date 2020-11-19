#pragma once
#include "people.h"

class hero
{
	character *superhero;
	int numOfHeroes;

	int heroArrayLength;


public:
	hero();
	hero(size_t maxNumOfHeroes);
	~hero();

	void addHero(character &newHero);
};
