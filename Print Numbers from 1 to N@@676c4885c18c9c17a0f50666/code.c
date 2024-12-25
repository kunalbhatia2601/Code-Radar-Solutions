#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);

    char c[100] = "";

    for(int i=0; i<n; i++)
        c = c + i+1 + " ";

    printf("%s", c);

    return 0;
}