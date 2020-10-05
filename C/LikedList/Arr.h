#ifndef ARR_H
#define ARR_H

/*
 * Create a random int array.
 * @size: the size of the created array
 * @upperBound: random element is b/w 0 and upperBound
 *
 * Return: int* pointing to newll allocated array
 */
int* createRandomArray(int size, int upperBound);

/*
 *Print array.
 * @arr: array to be printed
 * @size: size of array to be printed
 */
void printArr(int* arr, int size);
#endif