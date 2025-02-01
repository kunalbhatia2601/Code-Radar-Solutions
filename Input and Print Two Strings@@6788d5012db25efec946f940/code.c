#include <stdio.h>

char* welcome() {

    char[100] a, b,c ;

    scanf("%s%s", &a, &b);

    c = a + " and " + b;

    return c;
}

int main() {
    char[100] a;
    char[100] b;
    char[100] c;
    scanf("%s%s", &a, &b);

    printf("%s and %s", a, b);
    return 0;
}