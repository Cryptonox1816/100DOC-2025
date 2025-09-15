#include <stdio.h>

int main() {
    int group_sizes[] = {1, 3, 5, 3, 1}; // Number of '*' in each group
    int num_groups = sizeof(group_sizes) / sizeof(group_sizes[0]);

    for (int i = 0; i < num_groups; i++) {
        for (int j = 0; j < group_sizes[i]; j++) {
            printf("*\n");
        }
        if (i != num_groups - 1) {
            printf("\n"); // Add a blank line between groups
        }
    }

    return 0;
}