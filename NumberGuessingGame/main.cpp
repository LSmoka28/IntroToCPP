#include <iostream>
#include "guessing.h"

int main() 
{	
	// set max random value
	int random_max = 10;

	seedRandom();

	// set randomized number to a variable for comparison
	int cpu_correct_number = set_random_number(random_max);

	// intro game message
	std::cout << "Guess what number im thinking of?\nIll give you a hint, its a number bewteen 0 and " << random_max << std::endl;

	// run function to see if player is guessing correctly
	check_player_answer(cpu_correct_number);

	return 0;
}