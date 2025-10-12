#include <stdio.h>

int main() {
    int a, b, sum, diff;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Calculate sum and difference
    sum = a + b;
    diff = a - b;

    // Output results
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);

    return 0;
}
