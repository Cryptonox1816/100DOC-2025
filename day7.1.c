// Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/

#include<stdio.h>

int main() {
    int a;
    printf(" enter the integer :\n");
    scanf("%d", &a);
    if(a%4==0 && a%100!=0 || a%400==0 ){
        printf("leap year");
    }
else {
    printf(" not a leap year");


}









    return 0;
}