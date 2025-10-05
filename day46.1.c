#include <stdio.h>
#include <ctype.h>  // For tolower()

int isVowel(char ch) {
    ch = tolower(ch);  // Handle both uppercase and lowercase
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void removeVowels(char str[]) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            str[j++] = str[i];  // Copy non-vowel
        }
    }
    str[j] = '\0';  // Null-terminate the modified string
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input including spaces

    removeVowels(str);

    printf("String without vowels: %s\n", str);
    return 0;
}
