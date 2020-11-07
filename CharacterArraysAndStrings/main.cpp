#include <iostream>
#include <cstring>
#include "stringfunk.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;


int main()
{
	// promts user to type name
	cout << "What is your full name?" << endl;

	char input[50];

	cin.getline(input, 50);

	// verifes user input
	cout << "You said " << input << endl;
	cout << "Hello, " << input << "!" << endl;
	
	getFavColor();
	
}
