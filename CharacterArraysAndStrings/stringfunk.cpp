#include <iostream>
#include <cstring>
#include "stringfunk.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;


void getFavColor()
{
	char input[50];

	cout << "What is your favortie color?" << endl;

	cin.clear();

	cin.getline(input, 20);

	if (strcmp(input, "orange") == 0)
	{
		cout << "Orange is also a fruit" << endl;
	}
	if (strcmp(input, "red") == 0)
	{
		cout << "Red? Like the color of roses?" << endl;
	}
	else
	{
		cout << "I've never heard of that color before." << endl;
	}
}