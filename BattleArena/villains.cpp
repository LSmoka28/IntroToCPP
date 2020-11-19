#include "villains.h"


villain::villain()
{
	numOfVillains = 0;
	supervillain = new character[5];
	villainArrayLength = 5;
}


villain::villain(size_t maxNumOfVillains)
{
	numOfVillains = 0;
	supervillain = new character[maxNumOfVillains];
	villainArrayLength = maxNumOfVillains;
}


villain::~villain()
{
	delete[] supervillain;
}

void villain::addVillain(character &newVillain)
{
	if (numOfVillains >= villainArrayLength)
	{
		return;
	}

	supervillain[numOfVillains] = newVillain;
	++numOfVillains;
}