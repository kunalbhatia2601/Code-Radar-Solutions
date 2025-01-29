#include <stdio.h>

int main() {
    
    int n, i;
    scanf("%d", &n);

    char c[100] = "";

    for(i=0; i<n; i++)
    {
        c = c + i+1 + " ";
    }

    printf("%s", c);

    return 0;
}