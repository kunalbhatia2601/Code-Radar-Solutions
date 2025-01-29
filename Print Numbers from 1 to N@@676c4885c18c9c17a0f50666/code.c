#include <stdio.h>

int main() {
    
    int n, i;
    scanf("%d", &n);

    char c[100] = "";

    for(i=1; i<=n; i++)
    {
        printf("%d ", i);
    }

    printf("%s", c);

    return 0;
}