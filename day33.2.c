#include <stdio.h>

int main() {
    int arr[100], n, i, key, pos;

    // Input size and elements (sorted)
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the new element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // Find position to insert
    for (pos = 0; pos < n; pos++) {
        if (key < arr[pos]) {
            break;
        }
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = key;
    n++;  // Increase array size

    // Display updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
