#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Calculate sum of factorial of digits
    while (num > 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    // Check if sum equals original number
    if (sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}
