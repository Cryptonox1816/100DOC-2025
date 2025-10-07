#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to check if str2 is a rotation of str1
int isRotation(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths differ, they can't be rotations
    if (len1 != len2) return 0;

    // Create a new string by concatenating str1 with itself
    char *temp = (char *)malloc(sizeof(char) * (2 * len1 + 1));
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    int result = strstr(temp, str2) != NULL;

    free(temp); // Clean up memory
    return result;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (isRotation(str1, str2))
        printf("Yes, '%s' is a rotation of '%s'\n", str2, str1);
    else
        printf("No, '%s' is not a rotation of '%s'\n", str2, str1);

    return 0;
}
