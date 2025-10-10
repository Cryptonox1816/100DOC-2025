#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abc";  // You can change this to any string
    int len = strlen(str);

    printf("All substrings of \"%s\" are:\n", str);

    // Outer loop for starting index
    for (int i = 0; i < len; i++) {
        // Inner loop for ending index
        for (int j = i; j < len; j++) {
            // Print characters from i to j
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
