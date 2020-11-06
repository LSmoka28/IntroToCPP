#pragma once

// Prints all numbers
//  - numbers is the array of integers to print from
//  - size is the number of elements in the array
void printNumbers(int numbers[], size_t size);


// Returns the sum of all numbers in the array.
//  - numbers is the array of integers
//  - size is the number of elements in the array
int sumOf(int numbers[], size_t size);


// Returns the largest number of the entire array.
//  - numbers is the array of integers
//  - size is the number of elements in the array
int largestValue(int numbers[], size_t size);


// Returns the index of the element within the array that matches the given value.
//  - numbers is the array of integers
//  - size is the number of elements in the array
//  - value is the value we’re looking for
//  - start is the index to start looking from within the array
//
//  - Returns the index of the element within the array
//    - If not found, return -1
int findIndex(int numbers[], size_t size, int value, int start);


// Returns the number of times the given element occurs within the array
//  - numbers is the array of integers
//  - size is the number of elements in the array
//  - value is the value we’re looking for
//
//  - Returns the number of appearances of the element within the array
//    - If not found, return 0
int countElement(int numbers[], size_t size, int value);