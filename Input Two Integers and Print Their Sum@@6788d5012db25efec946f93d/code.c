#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, b, s;
    scanf("%d %d", &a, &b);
    s=a+b;
    printf("Sum: %d\n", s);
}