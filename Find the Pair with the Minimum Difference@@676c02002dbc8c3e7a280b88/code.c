#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    int N;
    scanf("%d", &N);

    if(N == 1)
    {
        printf("-1");
        return 0;
    }

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, N, sizeof(int), compare);

    int minDiff = abs(arr[1] - arr[0]);
    int minPair1 = arr[0];
    int minPair2 = arr[1];

    for (int i = 2; i < N; i++) {
        int diff = abs(arr[i] - arr[i - 1]);
        if (diff < minDiff) {
            minDiff = diff;
            minPair1 = arr[i - 1];
            minPair2 = arr[i];
        }
    }

    printf("%d %d\n", minPair1, minPair2);

    return 0;
}
