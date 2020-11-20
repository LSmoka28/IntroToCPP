// BattleArena.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "people.h"
#include "rand.h"


// TODO: check for zero health/ game over
// TODO: bubble sort after round is over
// TODO: remove from array if zero health
// TODO: user input to continue match / round

int main()
{

	// HEROES
	character hero[5] =
	{
		{ "Black Panther", "Panther Strike", 20, 40, 100, true},
		{ "Doctor Strange", "Eye of Agamotto", 25, 40, 100, true},
		{ "Iron Man", "Repulsor Shot", 10, 30, 100, true},
		{ "Spiderman", "Web Shooter", 10, 25, 100, true},
		{ "Thor", "Lightning Blast", 20, 35, 100, true}
	};

	// VILLAINS
	character villain[5] =
	{
		{"Doctor Doom", "Plasma Beam", 15, 25, 100, true},
		{"Dormammu", "Black Hole", 10, 40, 100, true},
		{"Loki", "Telekinesis", 10, 30, 100, true},
		{"Thanos", "Infinity Gauntlet", 25, 40, 100, true},
		{"Ultron", "Death Ray", 20, 35, 100, true}
	};

	bool gameRunning = true;
	int roundCount = 1;

	std::cout << "Battle Arena!\n";

	while (gameRunning)
	{
		
		seedRandom();
		
		for (int i = 0; i < 5; i++)
		{
			if (hero[i].alive || villain[i].alive)
			{
				// set random values
				int heroAttackValue = setRandomAttackValue(hero[i].minDmg, hero[i].maxDmg);
				int villainAttackValue = setRandomAttackValue(villain[i].minDmg, villain[i].maxDmg);
				int randomHero = setRandomIndex(5);


				std::cout << "\nRound " << roundCount << std::endl;

				//hero attack
				std::cout << "-" << hero[i].name << " attacks " << villain[randomHero].name << " with " << hero[i].nameOfAttack << "\nfor " << heroAttackValue << " damage" << std::endl;

				if (villain[randomHero].health <= 0)
				{
					std::cout << "that villain is already knocked out. you will attack another\n" << std::endl;
					randomHero = setRandomIndex(5);
					std::cout << "-" << hero[i].name << " attacks " << villain[randomHero].name << " with " << hero[i].nameOfAttack << "\nfor " << heroAttackValue << " damage" << std::endl;
					villain[randomHero].health -= heroAttackValue;
					std::cout << villain[randomHero].name << " has " << villain[randomHero].health << " health left\n\n";
				}
				else 
				{
					villain[randomHero].health -= heroAttackValue;
					std::cout << villain[randomHero].name << " has " << villain[randomHero].health << " health left\n\n";
				}

				//villain attack
				std::cout << "-" << villain[i].name << " attacks " << hero[randomHero].name << " with " << villain[i].nameOfAttack << "\nfor " << villainAttackValue << " damage" << std::endl;
				if (hero[randomHero].health <= 0)
				{
					std::cout << "that hero is already knocked out. you will attack another" << std::endl;
					randomHero = setRandomIndex(5);
					std::cout << "-" << villain[i].name << " attacks " << hero[randomHero].name << " with " << villain[i].nameOfAttack << "\nfor " << villainAttackValue << " damage" << std::endl;
					hero[randomHero].health -= villainAttackValue;
					std::cout << hero[randomHero].name << " has " << hero[randomHero].health << " health left\n\n";
				}
				else 
				{
					hero[randomHero].health -= villainAttackValue;
					std::cout << hero[randomHero].name << " has " << hero[randomHero].health << " health left\n\n";

				}

				

				roundCount++;


				if (villain[randomHero].health <= 0)
				{
					villain[randomHero].health = 0;
					villain[randomHero].alive = false;
					std::cout << villain[randomHero].name << " has been knocked out of the match\n" << std::endl;


				}
				if (hero[randomHero].health <= 0)
				{
					hero[randomHero].health = 0;
					hero[randomHero].alive = false;
					std::cout << hero[randomHero].name << " has been knocked out of the match\n" << std::endl;

				}

			}
			else if (!hero[i].alive)
			{
				std::cout << hero[i].name << " cannot fight and will be skipped\n" << std::endl;
			}
			else if (!villain[i].alive)
			{
				std::cout << villain[i].name << " cannot fight and will be skipped\n" << std::endl;
			}

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
