#include <stdio.h>

int main() {
    int num1, num2;
    int sum, diff, prod;
    float quotient;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculations
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;

    // Display results
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", prod);

    // Handle division carefully
    if (num2 != 0) {
        quotient = (float)num1 / num2;
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
