#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {

    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    float r = (float) (a+b+c)/3;

    printf("%.2f", r);

    return 0;
}