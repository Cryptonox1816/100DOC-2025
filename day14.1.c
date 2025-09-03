//Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main(){
    int a;
    printf("enter number");
    scanf("%d",&a);
    int i=1;
    for(i=1;i<=a*2-1;i=i+2){
        printf("%d\n",i);
    }
    printf("sum is %d",a*a);




    return 0;
}