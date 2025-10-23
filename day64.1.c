#include <stdio.h>
#include <string.h>

int longestSubstringLength(char *s) {
    int n = strlen(s);
    int freq[256];   // ASCII character set
    for (int i = 0; i < 256; i++)
        freq[i] = -1;

    int maxLen = 0, start = 0;

    for (int i = 0; i < n; i++) {
        if (freq[(unsigned char)s[i]] >= start) {
            start = freq[(unsigned char)s[i]] + 1;
        }
        freq[(unsigned char)s[i]] = i;
        int currLen = i - start + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }
    return maxLen;
}

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int result = longestSubstringLength(s);
    printf("Length of longest substring without repeating characters: %d\n", result);

    return 0;
}
