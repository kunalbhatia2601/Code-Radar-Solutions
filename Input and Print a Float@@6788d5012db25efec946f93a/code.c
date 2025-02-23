#include <math.h>
#include <stdio.h>

int main()
{
    // Declare variables to store the input number and its
    // square root
    double number, squareRoot;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    // Read the number entered by the user
    scanf("%lf", &number);

    // Compute the square root of the entered number
    squareRoot = sqrt(number);

    // Print the square root with 2 decimal places
    printf("Square root of %.2lf = %.2lf\n", number, squareRoot);

    return 0;
}