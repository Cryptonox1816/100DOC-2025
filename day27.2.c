#include <stdio.h>

int main() {
    int i, j;
    int rows[] = {1, 3, 5, 7, 3, 1}; // Number of stars in each row

    for (i = 0; i < 6; i++) {
        for (j = 0; j < rows[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
