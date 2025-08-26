//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>
int main() {
    int p,r,t;
    float si,ci;
    printf("enter principal amount :\n");
    printf("enter rate :\n");
    printf("enter time : \n");
    scanf("%d%d%d",&p,&r,&t);
    printf(" simple intrest is : %f\n", si = (p*r*t)/100);
    printf("enter number of years :");
    int n;
    scanf("%d", &n);
    printf(" compopund intrest is : %f\n", ci =p *(1 + r/100)*n);


    return 0;
}














