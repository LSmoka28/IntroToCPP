#include "funk.h"
#include <iostream>


using std::cout;
using std::endl;

// Prints the contents of an array of floats
void printFloats(float *arr, size_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		cout << arr[i] << endl;
	}
}

// Returns the sum of an integer array
int arraySum(int *arr, size_t size)
{
	int total = 0;

	for (size_t i = 0; i < size; i++)
	{
		total += arr[i];
	}

	return total;
}

// Initializes all of the values of a boolean array to the given default value
void initBools(bool *arr, size_t size, bool defaultValue)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = defaultValue;
	}
}

// Returns a pointer to a dynamic integer array with the given number of zeros
// size is the length of the array
int *zeroArray(size_t size)
{
	int *returnArray = new int[size];
	
	for (size_t i = 0; i < size; i++)
	{
		returnArray[i] = 0;
	}

	return returnArray;
}

// Returns a pointer to a dynamic integer array that is a copy of the provided array
// origArray refers to the array to be copied
// size refers to the size of the original array to copy
int *duplicateArray(int *origArray, size_t size)
{
	int *sameArray = new int[size];

	for (size_t i = 0; i < size; i++)
	{
		sameArray[i] = origArray[i];
	}

	return sameArray;
}

// swap pointer with another pointer
void swapPointers(int **arrA, int **arrB)
{
	int *arrayToKeep = *arrA;

	*arrA = *arrB;
	
	*arrB = arrayToKeep;
}
