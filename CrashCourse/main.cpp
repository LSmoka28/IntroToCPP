#include <iostream>
#include <cstdio>

int main() 
{

	// always init your variables 
	int count = 0;

	//never leave unint
	int age;

	//ask for age

	std::cout << "How old are you?" << std::endl;

	// gets input
	std::cin >> count;

	// if
	if (count <= 13) 
	{
		std::cout << "you can sign up" << std::endl;

	}
	// else
	else 
	{
		std::cout << "you cant access" << std::endl;
	}

	// adding
	std::cout << "youll be" << count + 1 << "next year" << std::endl;



	std::cout << "Hello World" << std::endl;;
	return 0;

}