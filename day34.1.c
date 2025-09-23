#include <stdio.h>
#define MAX 100

int main() {
    int arr[MAX], size, i, num, pos;

    // Input size
    printf("Enter size of the array: ");
    scanf("%d", &size);

    // Input elements
    printf("Enter %d elements: ", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element and position
    printf("Enter element to insert: ");
    scanf("%d", &num);
    printf("Enter position (1 to %d): ", size+1);
    scanf("%d", &pos);

    // Validate position
    if(pos < 1 || pos > size+1) {
        printf("Invalid position! Please enter between 1 and %d\n", size+1);
    } else {
        // Shift elements to the right
        for(i = size; i >= pos; i--) {
            arr[i] = arr[i-1];
        }

        // Insert element
        arr[pos-1] = num;
        size++;

        // Print updated array
        printf("Array after insertion: ");
        for(i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
