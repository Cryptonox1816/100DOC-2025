#include <stdio.h>
#define MAX 100

int main() {
    int arr[MAX], size, i, pos;

    // Input size
    printf("Enter size of the array: ");
    scanf("%d", &size);

    // Input elements
    printf("Enter %d elements: ", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position to delete
    printf("Enter position to delete (1 to %d): ", size);
    scanf("%d", &pos);

    // Validate position
    if(pos < 1 || pos > size) {
        printf("Invalid position! Please enter between 1 and %d\n", size);
    } else {
        // Shift elements to the left
        for(i = pos - 1; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--; // reduce size

        // Print updated array
        printf("Array after deletion: ");
        for(i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
