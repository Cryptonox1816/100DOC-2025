#include <stdio.h>

int main() {
    // Loop for each row starting from 5 down to 1
    for (int i = 5; i >= 1; i--) {
        // Print i stars in each row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }
    return 0;
}