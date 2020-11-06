#include <iostream>

int main() 
{
	int numberA = 5;
	int *pointerToNumberA = &numberA;

	std::cout << *pointerToNumberA << std::endl;	// prints 5

	//derefence and assign the value pointed to
	*pointerToNumberA = 22;


	std::cout << *pointerToNumberA << std::endl;	// prints 22
	std::cout << numberA << std::endl;				// prints 22

	// assign to numberA, whose vlaue is also pointed to by pointerToNumberA
	numberA = 74;

	std::cout << *pointerToNumberA << std::endl;
	std::cout << numberA << std::endl;

}
