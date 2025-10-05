#include <stdio.h>

char firstRepeatingChar(const char str[]) {
    int freq[26] = {0};  // For 'a' to 'z'

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {
                return ch;  // Found first repeating lowercase letter
            }
        }
    }
    return '\0';  // No repeating lowercase letter found
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char result = firstRepeatingChar(str);
    if (result != '\0')
        printf("First repeating lowercase alphabet: %c\n", result);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
