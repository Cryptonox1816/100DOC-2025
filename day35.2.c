#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;  // rotate by 2
    int result[n];

    // Normalize k if it's larger than n
    k = k % n;

    for (int i = 0; i < n; i++) {
        result[(i + k) % n] = arr[i];
    }

    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}
