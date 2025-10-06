#include <stdio.h>
#include <string.h>
#include <ctype.h>

int areAnagrams(char str1[], char str2[]) {
    int count[256] = {0}; // Frequency array for all ASCII characters
    int i;

    // If lengths differ, they can't be anagrams
    if (strlen(str1) != strlen(str2))
        return 0;

    // Count characters from str1 and subtract for str2
    for (i = 0; str1[i] && str2[i]; i++) {
        count[(unsigned char)tolower(str1[i])]++;
        count[(unsigned char)tolower(str2[i])]--;
    }

    // Check if all counts are zero
    for (i = 0; i < 256; i++) {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);  // For simplicity; use fgets in real applications
    printf("Enter second string: ");
    gets(str2);

    if (areAnagrams(str1, str2))
        printf("✅ The strings are anagrams.\n");
    else
        printf("❌ The strings are not anagrams.\n");

    return 0;
}
