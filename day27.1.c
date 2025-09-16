#include <stdio.h>

int main() {
    int i, j;
    int maxStars = 9; // Maximum number of stars in the middle row

    // Upper half of the pattern
    for (i = 1; i <= maxStars; i += 2) {
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the pattern
    for (i = maxStars - 2; i >= 1; i -= 2) {
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
