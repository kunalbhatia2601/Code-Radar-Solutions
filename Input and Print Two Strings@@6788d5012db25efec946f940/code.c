#include <stdio.h>

char* welcome() {

    char[100] a, b,c ;

    scanf("%s%s", &a, &b);

    c = a + " and " + b;

    return c;
}

int main() {
    printf("%s", welcome());
    return 0;
}