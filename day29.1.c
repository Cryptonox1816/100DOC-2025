#include <stdio.h>

int main() {
    int n, sum = 0;

    // Ask user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare array

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to sum
    }

    // Print the sum
    printf("Sum of array elements = %d\n", sum);

    return 0;
}
