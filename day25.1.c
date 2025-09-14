#include <stdio.h>

int main() {
    // Loop from 5 down to 1
    for (int i = 5; i >= 1; i--) {
        // Inner loop prints numbers from i to 5
        for (int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}