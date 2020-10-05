#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int* arr, int low, int high) {
    int pivot = arr[high];
    int leftTail = low - 1;
    int i = low;
    while(i <= high - 1) {
        int val = arr[i];
        if(val < pivot) {
            //left side
            leftTail++;
            swap(&arr[leftTail], &arr[i]);
        }
        i++;
    }
    leftTail++;
    swap(&arr[leftTail], &arr[high]);
    return leftTail;
}





void quickSort(int* arr, int low, int high) {
    if(low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

void printArr(int* arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int arr[10] = {3, 56, 89, 7, 77, 777, -5, 974, 13, 56};
    
    printArr(arr, 10);
    quickSort(arr, 0, 9);
    printArr(arr, 10);    
 
    return 0;
}


