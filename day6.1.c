//Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>
int main() {
    int i;
    printf("Enter an integer: ");
    scanf("%d", &i);
    if (i %2 ==0){
    printf("%d is even", i);
    }
    else{
    printf("%d is odd", i);
    }





    return 0;
}
