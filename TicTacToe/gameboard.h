#pragma once

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
void displayBoard();


void checkRowMatch();
void checkColumnMatch();
void checkDiagonalMatch();

// declare the gameArray
// - the name (and other info, like the type)
extern char gameArray[3][3];

