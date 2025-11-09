#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Display results
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    if (num2 != 0) {
        quotient = (float)num1 / num2;  // typecast for decimal division
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Division by zero is not possible.\n");
    }

    return 0;
}
