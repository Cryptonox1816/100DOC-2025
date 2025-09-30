#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Reads input including spaces

    // Loop until we hit the null character
    while (str[count] != '\0') {
        count++;
    }

    // Subtract 1 if newline character is included by fgets
    if (count > 0 && str[count - 1] == '\n') {
        count--;
    }

    printf("Number of characters: %d\n", count);

    return 0;
}
