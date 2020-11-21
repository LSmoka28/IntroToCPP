// BattleArena.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "people.h"
#include "rand.h"


// TODO: check for zero health/ game over
// TODO: bubble sort after round is over
// TODO: remove from array if zero health
// TODO: user input to continue match / round

// sort in decending order
void sort(character *array, size_t size)
{
	// run loops two times: one for walking throught the array
	// and the other for comparison
	for (size_t j = 0; j < size - 1; ++j) 
	{
		for (size_t i = 0; i < size - j - 1; ++i) 
		{
			
			if (array[i].health < array[i + 1].health) 
			{
				// swap if greater is at the rear position
				character temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}

}


int main()
{
	// HEROES
	character hero[5] =
	{
		{ "Black Panther", "Panther Strike", 20, 40, 100},
		{ "Doctor Strange", "Eye of Agamotto", 25, 40, 100},
		{ "Iron Man", "Repulsor Shot", 10, 30, 100 },
		{ "Spiderman", "Web Shooter", 10, 25, 100 },
		{ "Thor", "Lightning Blast", 20, 35, 100 }
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
	int roundCount = 1;
	size_t heroArraySize = 5;
	size_t villainArraySize = 5;
	size_t capacity = 5;

	std::cout << "Battle Arena!\n";

	while (gameRunning)
	{
		seedRandom();	
		for (int i = 0; i < 5; i++)
		{			
			// set random values
			int heroAttackValue = setRandomAttackValue(hero[i].minDmg, hero[i].maxDmg);
			int villainAttackValue = setRandomAttackValue(villain[i].minDmg, villain[i].maxDmg);
			int randomHero = setRandomIndex(heroArraySize);
			int randomVillain = setRandomIndex(villainArraySize);
			

			// round start
			std::cout << "\nRound " << roundCount << std::endl;

			//hero attack
			std::cout << "-" << hero[i].name << " attacks " << villain[randomVillain].name << " with " << hero[i].nameOfAttack << "\nfor " << heroAttackValue << " damage" << std::endl;
			villain[randomVillain].health -= heroAttackValue;
			std::cout << villain[randomVillain].name << " has " << villain[randomVillain].health << " health left\n\n";
			// if villain has zero health after attack, print knockout text
			if (villain[randomVillain].health <= 0)
			{
				villain[randomVillain].health = 0;
				std::cout << villain[randomVillain].name << " has been knocked out of the match\n" << std::endl;

				sort(villain, villainArraySize);
				sort(hero, heroArraySize);
				--villainArraySize;

				if (villain[0].health == 0)
				{
					std::cout << "Heroes Win" << std::endl;
					return 0;
				}
			}
			
			//villain attack
			std::cout << "-" << villain[i].name << " attacks " << hero[randomHero].name << " with " << villain[i].nameOfAttack << "\nfor " << villainAttackValue << " damage" << std::endl;
			hero[randomHero].health -= villainAttackValue;
			std::cout << hero[randomHero].name << " has " << hero[randomHero].health << " health left\n\n";
			// if hero has zero health after attack, print knockout text
			if (hero[randomHero].health <= 0)
			{
				hero[randomHero].health = 0;
				std::cout << hero[randomHero].name << " has been knocked out of the match\n" << std::endl;

				//sort both arrays
				sort(hero, heroArraySize);
				sort(villain, villainArraySize);
				--heroArraySize;
				if (hero[0].health == 0)
				{
					std::cout << "Villains Win" << std::endl;
					return 0;
				}
			}

			roundCount++;

			std::cout << "Press any key to continue rounds"<< std::endl;
			char input = ' ';
			std::cin >> input;
	
		}
	}
	gameRunning = false;
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
