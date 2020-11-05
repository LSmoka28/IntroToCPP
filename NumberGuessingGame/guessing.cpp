#include <cstdlib>
#include <iostream>
#include <ctime>
#include "guessing.h"

int set_max_guess() {
	int max_num = 0;

	std::cout << "Whats the max number to guess up to?" << std::endl;

	std::cin >> max_num;

	std::cout << "Max number set to: " << max_num << std::endl;

	std::srand(std::time(0));
	int max_guess = rand() % max_num + 1;

	std::cout << "cpu generated number : " << max_guess << std::endl;
	return 0;
}

int guess_between_two() {
	int highest_num = 0;
	int lowest_num = 0;


	

	std::cout << "Enter the highest number to guess from" << std::endl;
	std::cin >> highest_num;
	
	std::cout << "Enter the lowest number to guess from" << std::endl;
	std::cin >> lowest_num;

	std::srand(std::time(0));
	int range = highest_num - lowest_num;
	int random_guess = rand() % lowest_num + range;


	std::cout << "cpu generated a number between: " << highest_num << " and " << lowest_num << "\n the number generated was: " << random_guess << std::endl;

	return 0;
}