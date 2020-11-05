#include <cstdlib>
#include <iostream>
#include <ctime>
#include "guessing.h"





int main() 
{	
	set_max_guess();

	std::cout << "\nSingle Number Established and Guessed\n" << std::endl;

	guess_between_two();

	std::cout << "\nTwo Numbers Established and Guessed between\n" << std::endl;

	return 0;
}