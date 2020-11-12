#include <iostream>
#include <cstring>
#include "stringfunk.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;


void getFavColor()
{
	char inputColor[50] = "";

	cout << "What is your favortie color?" << endl;

	cin.getline(inputColor, 20);

	if (strcmp(inputColor, "orange") == 0)
	{
		cout << "Orange is also a fruit" << endl;
	}
	else if (strcmp(inputColor, "red") == 0)
	{
		cout << "Red? Like the color of roses?" << endl;
	}
	else
	{
		cout << "I've never heard of that color before." << endl;
	}
}

// upper all the letters
void toUpper(char *str, size_t size) 
{
	for (size_t i = 0; i < size; i++)
	{
		//check to see if already capitalized
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
	}
}