//Write a program to swap two numbers using a third variable.

#include<stdio.h>

int main() {
    int a,b;
    printf("enter first number :");
    scanf("%d", &a);
    printf("enter second number :");
    scanf("%d", &b);
    printf(" befor swap : %d %d\n ", a, b);
    int c = a;
    a = b;
    b = c;
    printf(" after swap : %d %d \n", a,b );



    return 0;
}