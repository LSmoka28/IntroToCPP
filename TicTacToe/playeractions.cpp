#include <iostream>
#include <cstring>
#include <string>
#include "playeractions.h"
#include "gameboard.h"

using std::cout;
using std::endl;
using std::cin;

// variable to count amount of turns
int moveCounter = 0;

// variables to define user selection, row and column numbers for gameboard
int selection = 0;
int rowOnBoard = 0;
int columnOnBoard = 0;

// sets starting player as X/ Player one
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

	


	// sets selection to zero at start
	selection = 0;

	// get input from players
	cout << "\nSelect the position to place your token (1-9)" << endl;
	cin >> selection;
	cin.clear();
	cin.ignore(10000, '\n');

	// if selection invalid, show board and ask again
	if (selection > 9 || selection <= 0)
	{		
		cout << "\nYou entered an invalid selection\nPlease select a valid spot (1-9)\n" << endl;

		displayBoard();

		getPlayerInput();
		return;
	}
	
	// cases for user inputs 1-9
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
	
	cout << "You selected spot [" << selection << "]. Is this correct?" << endl;
	// confirm player input


	char input = ' ';
	cin >> input;
	cin.clear();
	cin.ignore(10000, '\n');

	
	if (input == '0')
	{
		cout << "You didnt enter anything into the console" << endl;
		checkTurn();
		getPlayerInput();
	}

	if (input == 'y' || input == 'Y')
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

	// check for matching after 
	checkRowMatch();
	checkColumnMatch();
	checkDiagonalMatch();
	
}

// check for game over for draw and wins
bool isGameOver()
{
	if (checkRowMatch() == 1 || checkColumnMatch() == 1 || checkDiagonalMatch() == 1) 
	{
		displayBoard();
		cout << "\nPlayer one has matched 3 tokens together! Player one is the winner!\n" << endl;
		return true;
	}
	if (checkRowMatch() == 2 || checkColumnMatch() == 2 || checkDiagonalMatch() == 2)
	{
		displayBoard();
		cout << "\nPlayer two has matched 3 tokens together!Player two is the winner!\n" << endl;
		return true;
	}
	if (moveCounter == 9)
	{
		displayBoard();
		cout << "\nGame is a draw! There is no winner\nTry again another time\n" << endl;
		return true;
	}
	return false;
}

