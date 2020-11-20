// BattleArena.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "people.h"
#include "rand.h"



int main()
{

	// HEROES
	character hero[5] =
	{
		{ "Black Panther", "Panther Strike", 20, 40, 100},
		{ "Doctor Strange", "Eye of Agamotto", 25, 40, 100},
		{ "Iron Man", "Repulsor Shot", 10, 30, 100},
		{ "Spiderman", "Web Shooter", 10, 25, 100},
		{ "Thor", "Lightning Blast", 20, 35, 100}
	};

	// VILLAINS
	character villain[5] =
	{
		{"Doctor Doom", "Plasma Beam", 15, 25, 100},
		{"Dormammu", "Black Hole", 10, 40, 100},
		{"Loki", "Telekinesis", 10, 30, 100},
		{"Thanos", "Infinity Gauntlet", 25, 40, 100},
		{"Ultron", "Death Ray", 20, 35, 100}
	};

	bool gameRunning = true;
	int roundCount = 0;

	std::cout << "Battle Arena!\n";
	while (gameRunning)
	{
		seedRandom();
		std::cout << "\Match Begin!\n";
		for (int i = 0; i < 5; i++)
		{
			// set random values
			int heroAttackValue = setRandomAttackValue(hero[i].minDmg, hero[i].maxDmg);
			int villainAttackValue = setRandomAttackValue(villain[i].minDmg, villain[i].maxDmg);
			int randomHero = setRandomIndex(5);


			roundCount++;

			std::cout << "\nRound " << roundCount << std::endl;

			//hero attack
			std::cout << "-" << hero[i].name;
			
			std::cout << " attacks " << villain[randomHero].name << " with " << hero[i].nameOfAttack << "\nand inflicts " << heroAttackValue << " damage" << std::endl;
			villain[randomHero].health -= heroAttackValue;
			std::cout << villain[randomHero].name << " has " << villain[randomHero].health << " health left\n\n";


			//villain attack
			std::cout << "-" << villain[i].name << " attacks " << hero[randomHero].name << " with " << villain[i].nameOfAttack << "\nand inflicts " << villainAttackValue << " damage" << std::endl;
			hero[randomHero].health -= villainAttackValue;
			std::cout << hero[randomHero].name << " has " << hero[randomHero].health << " health left\n\n";
						 
		}

		gameRunning = false;
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
