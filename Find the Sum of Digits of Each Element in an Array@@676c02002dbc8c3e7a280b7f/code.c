#include <stdio.h>

int main() {
    // Create an array
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Print original numbers
    printf("Original numbers: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
        
    printf("\n");

    // Calculate squares
    int squares[size];
    for (int i = 0; i < size; i++) {
        squares[i] = numbers[i] * numbers[i];
    }

    printf("Squared numbers: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", squares[i]);
    }

    printf("\n");

    // Filter even numbers
    printf("Even numbers: ");
    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
        }
    }

    printf("\n");

    // Calculate sum
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    printf("Sum of numbers: %d\n", sum);

    return 0;
}