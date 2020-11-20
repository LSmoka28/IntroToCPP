#include "rand.h"
#include <iostream>
#include <ctime>



int setRandomAttackValue(int minValue, int maxValue)
{
	int randVal = rand() % (maxValue - minValue);

	return randVal + minValue;

}


int setRandomIndex(int maxPeople)
{
	
	return rand() % maxPeople;
}


void seedRandom()
{
	return std::srand(std::time(0));
}