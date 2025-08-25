//Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>

int main() {
    float cel;
    printf(" enter temp in celsius : ");
    scanf(" %f", &cel);
    printf("temp in fahrenheit is : %f\n", (cel * 9/5) + 32);



    return 0;
}