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
void checkRowMatch()
{
	for (int i = 0; i < 3; i++)
	{
		if (gameArray[i][0] && gameArray[i][1] && gameArray[i][2] == 'X')
		{
			cout << "Player One has matched a row!\nPlayer one is the winner!" << endl;
		}
		if (gameArray[i][0] && gameArray[i][1] && gameArray[i][2] == 'O')
		{
			cout << "Player Two has matched a row!\nPlayer two is the winner!" << endl;
		}
	}
}

// checks for win by column
void checkColumnMatch()
{
	for (int i = 0; i < 3; i++)
	{
		if (gameArray[0][i] && gameArray[1][i] && gameArray[2][i] == 'X')
		{
			cout << "Player One has matched a column!\nPlayer one is the winner!" << endl;
		}
		if (gameArray[0][i] && gameArray[1][i] && gameArray[2][i] == 'O')
		{
			cout << "Player Two has matched a column!\nPlayer two is the winner!" << endl;
		}
	}
}

// checks for win by diagonal
void checkDiagonalMatch()
{	
	if (gameArray[0][0] && gameArray[1][1] && gameArray[2][2] == 'X')
	{
		cout << "Player One has matched a diagonally!\nPlayer one is the winner!" << endl;
	}
	if (gameArray[0][2] && gameArray[1][1] && gameArray[2][0] == 'O')
	{
		cout << "Player Two has matched diagonally!\nPlayer two is the winner!" << endl;
	}
	
}