#include <stdio.h>

int main() {
    int a, b;
    int sum, difference, product;
    float quotient;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Calculations
    sum = a + b;
    difference = a - b;
    product = a * b;

    // Display results
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    // Check for division by zero
    if (b != 0) {
        quotient = (float)a / b;
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Quotient = Undefined (division by zero)\n");
    }

    return 0;
}
