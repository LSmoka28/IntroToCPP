#include <iostream>
#include <cstring>
#include "playeractions.h"
#include "gameboard.h"
//#include "gameboard.cpp"


using std::cout;
using std::endl;
using std::cin;

int selection = 0;
int rowOnBoard = 0;
int columnOnBoard = 0;
char player = 'X';




void checkTurn()
{
	if (player == 'X')
	{
		cout << "\nPlayer One's turn (X)\n" << endl;
	}
	else if (player == 'O')
	{
		cout << "\nPlayer Two's turn (O)\n" << endl;
	}

}


// have player type X or O depending on the players turn
void getPlayerInput()
{
	
	// get input for players
	selection = 0;

	cin.clear();

	cout << "Select the position to place your mark" << endl;
	cin >> selection;


	// accept inputs for numbers 1-9 to place at the right position on board
	switch (selection)
	{
		case 1:
			rowOnBoard = 0, columnOnBoard = 0; 
			break;
		case 2:
			rowOnBoard = 0, columnOnBoard = 1;
			break;
		case 3:
			rowOnBoard = 0, columnOnBoard = 2;
			break;
		case 4:
			rowOnBoard = 1, columnOnBoard = 0;
			break;
		case 5:
			rowOnBoard = 1, columnOnBoard = 1;
			break;
		case 6:
			rowOnBoard = 1, columnOnBoard = 2;
			break;
		case 7:
			rowOnBoard = 2, columnOnBoard = 0;
			break;
		case 8:
			rowOnBoard = 2, columnOnBoard = 1;
			break;
		case 9:
			rowOnBoard = 2, columnOnBoard = 2;
			break;
		default: cout << "Not a valid input" << endl;

	}
	
	char input = ' ';
	cout << "You selected spot [" << selection << "]. Is this correct?" << endl;
	cin >> input;
	cout << "" << endl;

	if (input == 'y')
	{
		if (player == 'X' && gameArray[rowOnBoard][columnOnBoard] != 'X' && gameArray[rowOnBoard][columnOnBoard] != 'O')
		{
			gameArray[rowOnBoard][columnOnBoard] = 'X';
			player = 'O';
		}
		else if (player == 'O' && gameArray[rowOnBoard][columnOnBoard] != 'X' && gameArray[rowOnBoard][columnOnBoard] != 'O')
		{
			gameArray[rowOnBoard][columnOnBoard] = 'O';
			player = 'X';
		}
		else
		{
			cout << "That place is already taken in the board.\nPlease choose another";
			checkTurn();
		}
	}
	else
	{
		checkTurn();
		getPlayerInput();
	}

	checkRowMatch();
	checkColumnMatch();
	checkDiagonalMatch();
	


}

