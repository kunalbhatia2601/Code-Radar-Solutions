#include <stdio.h>
#include <string.h>

int main() 
{
    char s[100];
    fgets(s, sizeof(s), stdin);

    printf("%d", strlen(s));

}
