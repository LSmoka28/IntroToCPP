#include <cstdlib>
#include <iostream>
#include <ctime>

int main() 
{
	std::srand(std::time(0)); // uses current time as seed for random gen
	int random_variable = std::rand();
	std::cout << "Random value on [0 " << RAND_MAX << "]: "
		<< random_variable << '\n';

	int random_number = std::rand();


	// prints random numbers from a 6 sided dice that rolls 20 times
	for (int n = 0; n != 20; n++) {
		int x = 7;
		while (x > 6)
			x = 1 + std::rand() / ((RAND_MAX + 1u) / 6);
		std::cout << x << ' ';
	}
	
	// prints random number to see if rand() was coded properly
	std::cout << "\nthe random number is: " << random_number << std::endl;





	std::cout << "Hello World!" << std::endl;
	return 0;
}