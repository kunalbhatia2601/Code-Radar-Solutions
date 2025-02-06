#include <stdio.h>

void bubbleSort(int ary[], int n)
{
    ary.sort(ary.begin(), ary.end());
}

void printArray(int ary[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d", ary[i]);
    }
}