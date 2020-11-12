#include <iostream>
#include <cstring>
#include "gameboard.h"

using std::cout;
using std::endl;

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
