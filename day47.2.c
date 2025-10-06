#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    char longest[100] = "";
    int maxLen = 0, currLen = 0;
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {
        if (!isspace(sentence[i])) {
            if (currLen == 0) start = i; // Start of a new word
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                strncpy(longest, &sentence[start], currLen);
                longest[currLen] = '\0'; // Null-terminate the word
            }
            currLen = 0;
        }
        i++;
    }

    // Check last word (in case sentence doesn't end with space)
    if (currLen > maxLen) {
        maxLen = currLen;
        strncpy(longest, &sentence[start], currLen);
        longest[currLen] = '\0';
    }

    printf("📏 Longest word: %s\n", longest);
    printf("🔢 Length: %d\n", maxLen);

    return 0;
}
