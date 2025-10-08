#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);  // safer than gets()

    printf("Initials: ");
    for (int i = 0; name[i] != '\0'; i++) {
        if (i == 0 && name[i] != ' ') {
            printf("%c", name[i]);
        } else if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c", name[i + 1]);
        }
    }

    return 0;
}
