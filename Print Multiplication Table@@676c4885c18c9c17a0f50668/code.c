#include <stdio.h>
int main()
{
    
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n*i);

    return 0;
}