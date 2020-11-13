#include <iostream>
#include <cstring>
#include "playeractions.h"
#include "gameboard.h"

using std::cout;
using std::endl;
using std::cin;

// variable to count amount of turns
int moveCounter = 0;


int selection = 0;
int rowOnBoard = 0;
int columnOnBoard = 0;
char player = 'X';

// function to show whos turn it is
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


// have player type 1-9 on the players turn
void getPlayerInput()
{
	selection = 0;

	cin.clear();
	cin.ignore(10000, '\n');

	// get input from players
	cout << "\nSelect the position to place your token (1-9)" << endl;
	cin >> selection;
	cin.clear();

	// if selection invalid, ask again
	if (selection > 9 || selection <= 0)
	{
		cin.clear();

		cout << "\nYou entered in an invalid selection\nPlease select a valid spot (1-9)\n" << endl;

		displayBoard();

		getPlayerInput();

		cin.clear();
	}
	
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
	default: 
		cin.clear();
		break;
	}
	
	cin.clear();
	char input = ' ';
	cout << "You selected spot [" << selection << "]. Is this correct?" << endl;
	cin >> input;
	

	if (input == 'y')
	{
		if (player == 'X' && gameArray[rowOnBoard][columnOnBoard] != 'X' && gameArray[rowOnBoard][columnOnBoard] != 'O')
		{
			gameArray[rowOnBoard][columnOnBoard] = 'X';
			player = 'O';
			moveCounter++;
		}
		else if (player == 'O' && gameArray[rowOnBoard][columnOnBoard] != 'X' && gameArray[rowOnBoard][columnOnBoard] != 'O')
		{
			gameArray[rowOnBoard][columnOnBoard] = 'O';
			player = 'X';
			moveCounter++;
		}
		else
		{
			cout << "That place is already taken in the board.\nPlease choose another" << endl;
			checkTurn();
		}
	}
	else
	{
		cout << "You declined or entered an invalid response\n" << endl;
		checkTurn();
		getPlayerInput();
	}

	checkRowMatch();
	checkColumnMatch();
	checkDiagonalMatch();
	
}


// check for game over
bool isGameOver()
{
	if (checkRowMatch() == 1 || checkColumnMatch() == 1 || checkDiagonalMatch() == 1) 
	{
		cout << "Player one is the winner!" << endl;
		return true;
	}
	if (checkRowMatch() == 2 || checkColumnMatch() == 2 || checkDiagonalMatch() == 2)
	{
		cout << "Player two is the winner!" << endl;
		return true;
	}
	if (moveCounter == 9)
	{
		cout << "Game is a draw! Try again another time" << endl;
		return true;
	}
	return false;
}

