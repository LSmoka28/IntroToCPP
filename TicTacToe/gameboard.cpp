#include <iostream>
#include <cstring>
#include "gameboard.h"

using std::cout;
using std::endl;

// declared in gameboard.h -- defined in gameboard.cpp
char gameArray[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };


//displays game board with proper filled areas(1-9)
//     |     |     
//  1  |  2  |  3  
//_____|_____|_____
//     |     |     
//  4  |  5  |  6  
//_____|_____|_____
//     |     |     
//  7  |  8  |  9  
//     |     |      
void displayBoard()
{

	cout << "     |     |     " << endl;
	cout << "  " << gameArray[0][0] << "  |  " << gameArray[0][1] << "  |  " << gameArray[0][2] << "  " << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << gameArray[1][0] << "  |  " << gameArray[1][1] << "  |  " << gameArray[1][2] << "  " << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << gameArray[2][0] << "  |  " << gameArray[2][1] << "  |  " << gameArray[2][2] << "  " << endl;
	cout << "     |     |      " << endl;
}


// checks for win by rows
int checkRowMatch()
{
	for (int i = 0; i < 3; i++)
	{
		if (gameArray[i][0] == 'X' && gameArray[i][1] == 'X' && gameArray[i][2] == 'X')
		{		
			return 1;
		}
		if (gameArray[i][0] == 'O' && gameArray[i][1] == 'O' && gameArray[i][2] == 'O')
		{
			return 2;
		}
	}
	return 0;
}

// checks for win by column
int checkColumnMatch()
{
	for (int i = 0; i < 3; i++)
	{
		if (gameArray[0][i] == 'X' && gameArray[1][i] == 'X' && gameArray[2][i] == 'X')
		{
			
			return 1;
		}
		if (gameArray[0][i] == 'O' && gameArray[1][i] == 'O' && gameArray[2][i] == 'O')
		{

			return 2;
		}
		
	}
	return 0;
}

// checks for win by both diagonal directions 
int checkDiagonalMatch()
{	
	if (gameArray[0][0] == 'X' && gameArray[1][1] == 'X' && gameArray[2][2] == 'X')
	{
		return 1;
	}
	if (gameArray[0][2] == 'X' && gameArray[1][1] == 'X' && gameArray[2][0] == 'X')
	{
		return 1;
	}
	if (gameArray[0][0] == 'O' && gameArray[1][1] == 'O' && gameArray[2][2] == 'O')
	{
		return 2;
	}
	if (gameArray[0][2] == 'O' && gameArray[1][1] == 'O' && gameArray[2][0] == 'O')
	{
		return 2;
	}

	return 0;
}
