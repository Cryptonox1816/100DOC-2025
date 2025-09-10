#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers by making positive
    int original_sign = 1;
    if (num < 0) {
        original_sign = -1;
        num = -num;
    }

    // Find number of digits
    int digits = 0;
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    if (digits <= 1) {
        printf("Number after swapping: %d\n", num * original_sign);
        return 0;
    }

    // Calculate power
    int power = (int)pow(10, digits - 1);

    // Extract digits
    int first_digit = num / power;
    int last_digit = num % 10;
    int middle = (num % power) / 10;

    // Construct new number
    int new_num = last_digit * power + middle * 10 + first_digit;

    printf("Number after swapping: %d\n", new_num * original_sign);

    return 0;
}
