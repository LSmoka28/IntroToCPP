#include <iostream>
#include "funk.h"

using std::cout;
using std::endl;

int main() 
{
	int numberA = 5;
	int *pointerToNumberA = &numberA;

	std::cout << *pointerToNumberA << std::endl;	// prints 5

	//derefence and assign the value pointed to
	*pointerToNumberA = 22;


	std::cout << *pointerToNumberA << std::endl;	// prints 22
	std::cout << numberA << std::endl;				// prints 22

	// assign to numberA, whose vlaue is also pointed to by pointerToNumberA
	numberA = 74;

	std::cout << *pointerToNumberA << std::endl;
	std::cout << numberA << std::endl;


	float printArr[] = { 5.6f, 6.7f, 8.9f };
	printFloats(printArr, 3);


	bool initArr[5] = {};
	initBools(initArr, 5, false);
	initBools(initArr, 5, true);

	int *zArray = zeroArray(10);
	for (size_t i = 0; i < 10; i++)
	{
		cout << zArray[i] << endl;
	}

	int *zDupArr = duplicateArray(zArray, 10);

	int *a = new int(2);
	int *b = new int(4);

	swapPointers(&a, &b);

	delete[] zDupArr;
	delete[] zArray;

	return 0;
}
