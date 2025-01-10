#include <stdio.h>

int main() {
    
    int n, sm=0;

    scanf("%d", &n);

    for(int i=1; i<=n; i++)
        sm+=i;

    printf("%d", sm);

    return 0;
}