#include "heroes.h"


hero::hero()
{
	numOfHeroes = 0;
	superhero = new character[5];
	heroArrayLength = 5;
}


hero::hero(size_t maxNumOfHeroes)
{
	numOfHeroes = 0;
	superhero = new character[maxNumOfHeroes];
	heroArrayLength = maxNumOfHeroes;
}


hero::~hero()
{
	delete[] superhero;
}

void hero::addHero(character &newHero)
{
	if (numOfHeroes >= heroArrayLength)
	{
		return;
	}

	superhero[numOfHeroes] = newHero;
	++numOfHeroes;
}