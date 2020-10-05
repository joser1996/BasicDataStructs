#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int* createRandomArray(int size) {
	int* arr = (int*) malloc(size*sizeof(int));
	srand(time(NULL));
	for(int i = 0; i < size; i++) {
		arr[i] = rand() % 50;
	}
	return arr;
}


void printArr(int* arr, int size) {
	for(int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
