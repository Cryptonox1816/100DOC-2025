#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if (name[len - 1] == '\n') name[len - 1] = '\0';  // Remove newline

    int lastSpace = -1;

    // Find position of last space (start of surname)
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    printf("Output: ");

    // Print initials (excluding surname)
    for (int i = 0; i < lastSpace; i++) {
        if (i == 0 && name[i] != ' ') {
            printf("%c. ", toupper(name[i]));
        } else if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c. ", toupper(name[i + 1]));
        }
    }

    // Print full surname
    if (lastSpace != -1) {
        printf("%s", &name[lastSpace + 1]);
    }

    return 0;
}
