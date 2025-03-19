#include <stdio.h>
int main() {
    for (int i = 1; i <= 500; i++) {
        if (i >= 32 && i <= 126) // Printable ASCII range
            printf("%3d -> %c\n", i, i);
        else
            printf("%3d -> (non-printable)\n", i);
    }
    return 0;
}
