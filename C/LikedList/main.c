#include <stdio.h>

#include "LinkedList.h"
#include "Arr.h"


int main(void) {
	int numElements = 3 ;
	int upperBound = 50;
	list_t list = listCreate();
	int* arr = createRandomArray(numElements, upperBound);
	//populate array
	for(int i=0; i< numElements; i++) {
		listAppend(list, &arr[i]);
	}
	printf("Generated Random List\n");
	printList(list);

	printf("Attempting to reverse List\n");
	reverseList(list);
	printList(list);
	return 0;
}