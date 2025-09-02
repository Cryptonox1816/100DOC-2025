//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include<stdio.h>
int main(){
    int a,b;
    printf("enter numbers :\n");
    scanf("%d%d",&a,&b);
    int choice;
    printf("enter choice : 1.addition,2.subtraction,3.multiplication,4.division,5.modulus\n");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("%d",a+b);
              break;
        case 2 : printf("%d",a-b);
              break;
        case 3 : printf("%d",a*b);
              break;
        case 4 : printf("%d",a/b);
              break;
        case 5 : printf("%d",a%b);
              break;
        default : printf("invalid choice");
              break;
    }






    return 0;
}