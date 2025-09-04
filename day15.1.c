//Write a program to calculate the factorial of a number.
#include<stdio.h>
int main(){
    int a;
    int fact=1;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=1 ;i<=a ; i++){
        fact=fact*i;
    }
    printf("Factorial of %d is %d\n",a,fact);



    return 0;
}
