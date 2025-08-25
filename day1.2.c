//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>

int main() {
    int a , b;
    printf("enter first number :");
    scanf("%d", &a);
    printf("enter second number :");
    scanf("%d", &b);
// Sum of two numbers!!
    printf("sum of two numbers is : %d \n", a+b );
// difference of two numbers!!
    printf(" difference of two number is : %d \n", a-b);
//product of two numbers is!!
    printf(" product of two numbers is : %d \n", a*b);
//quotient of two numbers is!!
    printf(" quotientof two numbers is : %f \n", (float)a/b);

    




    return 0;
}