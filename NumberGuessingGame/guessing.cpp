#include <cstdlib>
#include <iostream>
#include <ctime>
#include "guessing.h"

// set a random number between 0 and a defined param int
int set_random_number(int max_value)
{
	return rand() % (max_value + 1);
}

// compares player guess to a cpus correct answer
void check_player_answer(int cpu_answer)
{
	bool guessing = true;
	int number_guessed = 0;
	int attempts = 0;

	while (guessing)
	{
		std::cout << "What is your guess?\n";
		std::cin >> number_guessed;
		std::cin.clear();

		// win message/ correct guess
		if (number_guessed == cpu_answer)
		{
			std::cout << "Im surpised! You guessed the right number!\n";
			std::cout << "The number was: " << cpu_answer << std::endl;
			
			guessing = false;
		}
		// less than correct number check
		else if (number_guessed < cpu_answer)
		{
			attempts++;
			std::cout << "Wrong! Number was too low!\n";
		}
		// less than correct number check
		else if (number_guessed > cpu_answer)
		{
			attempts++;
			std::cout << "Wrong! Number was too high!\n";
		}
		// check to see if max attempts have been reached
		if (attempts == 3)
		{
			std::cout << "You exceeded the given amount of tries to guess correctly\n";
			std::cout << "The number i was thinking of was: " << cpu_answer << std::endl;
			std::cout << "Goodbye\n";

			break;
		}		
	}
}

// seeds the random generator using time
void seedRandom()
{
	return std::srand(std::time(0));
}
