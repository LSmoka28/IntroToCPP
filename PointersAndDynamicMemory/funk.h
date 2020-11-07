#pragma once

// Prints the contents of an array of floats
void printFloats(float *arr, size_t size);

// Returns the sum of an integer array
int arraySum(int *arr, size_t size);

// Initializes all of the values of a boolean array to the given default value
void initBools(bool *arr, size_t size, bool defaultValue);

// Returns a pointer to a dynamic integer array with the given number of zeros
// size is the length of the array
int *zeroArray(size_t size);

// Returns a pointer to a dynamic integer array that is a copy of the provided array
// origArray refers to the array to be copied
// size refers to the size of the original array to copy
int *duplicateArray(int *origArray, size_t size);

// swap pointer with another pointer
void swapPointers(int **arrA, int **arrB);


