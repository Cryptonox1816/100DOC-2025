#include <stdio.h>

int findPivot(int n) {
    // Total sum from 1 to n using formula: n*(n+1)/2
    int totalSum = n * (n + 1) / 2;
    int leftSum = 0;

    for (int x = 1; x <= n; x++) {
        leftSum += x; // Sum from 1 to x
        int rightSum = totalSum - leftSum + x; // Sum from x to n
        if (leftSum == rightSum) {
            return x; // Found the pivot
        }
    }
    return -1; // No pivot found
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int pivot = findPivot(n);
    printf("Pivot integer: %d\n", pivot);
    return 0;
}
