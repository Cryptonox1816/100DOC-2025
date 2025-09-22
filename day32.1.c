#include <stdio.h>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i, j;

    // Copy elements of the first array
    for (i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements of the second array
    for (j = 0; j < size2; j++) {
        merged[i + j] = arr2[j];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[size1 + size2];

    // Merge the arrays
    mergeArrays(arr1, size1, arr2, size2, merged);

    // Print the merged array
    printf("Merged Array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
