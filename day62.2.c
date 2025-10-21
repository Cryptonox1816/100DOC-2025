#include <stdio.h>

int main() {
    int a, b;
    int sum, difference, product;
    float quotient;   // use float for division

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;
    difference = a - b;
    product = a * b;

    if (b != 0) {
        quotient = (float)a / b;   // typecast to get decimal result
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    return 0;
}
