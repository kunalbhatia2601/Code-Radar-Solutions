#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int ary[], int n) {     
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(ary[j] > ary[j + 1]) {
                // Swap elements
                int temp = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int ary[], int n) {     
    for(int i = 0; i < n; i++) {         
        printf("%d", ary[i]);     
    }     
    printf("\n");
}