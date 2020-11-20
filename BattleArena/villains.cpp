#include "villains.h"

// VILLAIN TEAM
character doctordoom = { "Doctor Doom", "Plasma Beam", 15, 25, 100 };
character dormammu = { "Dormammu", "Black Hole", 10, 40, 100 };
character loki = { "Loki", "Telekinesis", 10, 30, 100 };
character thanos = { "Thanos", "Infinity Gauntlet", 25, 40, 100 };
character ultron = { "Ultron", "Death Ray", 20, 35, 100 };



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