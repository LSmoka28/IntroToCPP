#include <iostream>
#include "arrayfunc.h"

int main() 
{
	int numbersArray[] = { 1,2,3,4,5 };

	printNumbers(numbersArray, 5);


	int sumArrA[] = {0,1,2,3};
	int sumArrB[] = {2,4,8,16,32,64};
	int sumArrC[] = {33,74,52,9};

	sumOf(sumArrA, 4);
	sumOf(sumArrB, 6);
	sumOf(sumArrC, 4);

	int largestNumberArrA[] = { 0,1,2,3 };
	int largestNumberArrB[] = { 2,4,8,16,32,64 };
	int largestNumberArrC[] = { 33,74,52,9 };

	largestValue(largestNumberArrA, 4);
	largestValue(largestNumberArrB, 6);
	largestValue(largestNumberArrC, 4);
	
	int findArrA[] = {4,5,7,8,9};
	int findArrB[] = {1,2,6,8,2};
	int findArrC[] = {3,2,1,2,3};

	findIndex(findArrA, 5, 5, 0);
	findIndex(findArrB, 5, 7, 2);
	findIndex(findArrC, 5, 3, 2);

	int countArrA[] = {4,5,7,8,9};
	int countArrB[] = {1,2,6,8,2};
	int countArrC[] = {1,2,6,8,2};
	int countArrD[] = {3,2,1,7,5};

	countElement(countArrA, 5, 5);
	countElement(countArrB, 5, 7);
	countElement(countArrC, 5, 2);
	countElement(countArrD, 5, 5);


	return 0;
}