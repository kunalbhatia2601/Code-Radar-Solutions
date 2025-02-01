#include <stdio.h>

char* welcome() {

    char[100] a, b,c ;

    scanf("%s%s", &a, &b);

    c = a + " and " + b;

    return c;
}

int main() {
    char[100] a, b,c ;

    scanf("%s%s", &a, &b);

    c = a + " and " + b;

    printf("%s", c);
    return 0;
}