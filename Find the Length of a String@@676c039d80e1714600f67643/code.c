#include <stdio.h>
#include <string.h>


int main() {
    
    char s[100];
    fgets(s, sizeof(s), stdin);

    s[strcspn(s, "\n")] = "\0";

    printf("%d", strlen(s));

}