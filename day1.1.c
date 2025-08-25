//Write a program to input two numbers and display their sum.
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("The sum of both numbers is: %d\n", a + b);

    return 0;
}