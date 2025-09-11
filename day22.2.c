#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    double sum = 0.0;
    for (int k = 1; k <= n; k++) {
        double numerator = 2 * k - 1;
        double denominator = 2 * (k + 1);
        sum += numerator / denominator;
    }

    printf("Sum of the series up to %d terms is: %.6f\n", n, sum);

    return 0;
}
