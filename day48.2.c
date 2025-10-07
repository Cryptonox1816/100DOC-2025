#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse characters from index 'start' to 'end'
void reverse(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to reverse each word in the sentence
void reverseWords(char *str) {
    int i = 0, start = 0;
    int len = strlen(str);

    while (i <= len) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
        i++;
    }
}

int main() {
    char str[200];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    size_t ln = strlen(str) - 1;
    if (str[ln] == '\n') str[ln] = '\0';

    reverseWords(str);

    printf("Reversed words: %s\n", str);
    return 0;
}
