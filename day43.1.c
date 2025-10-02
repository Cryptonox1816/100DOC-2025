#include <stdio.h>
#include <string.h>

// Function to reverse the string
void reverseString(char str[]) {
    int i, len = strlen(str);
    char temp;

    for (i = 0; i < len / 2; i++) {
        // Swap characters
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  // Note: This reads input until the first space

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
