#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    scanf("%f", &a);
    printf("Area: %.2f", a*a*3.14);
    return 0;
}