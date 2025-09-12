//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    double sum = 0.0;
    for (int k = 1; k <= n; k++) {
        double numerator = 2.0 * k;
        double denominator = 4.0 * k - 1.0;
        sum += numerator / denominator;
    }

    printf("Sum of the series up to %d terms is: %.6f\n", n, sum);

    return 0;
}
