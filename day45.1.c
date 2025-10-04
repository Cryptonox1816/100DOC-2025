#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    // Input character to count
    printf("Enter the character to count: ");
    scanf("%c", &ch);

    // Count frequency
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}
