#pragma once
#include "people.h"

class villain
{
	character *supervillain;
	int numOfVillains;

	int villainArrayLength;


public:
	villain();
	villain(size_t maxNumOfVillains);
	~villain();

	void addVillain(character &newVillain);
};