#include <stdio.h>

int main() {
    char str[100];
    int i, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer than gets()

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            continue; // ignore alphabets
        else
            special++;
    }

    printf("\nSpaces: %d", spaces);
    printf("\nDigits: %d", digits);
    printf("\nSpecial Characters: %d\n", special);

    return 0;
}
