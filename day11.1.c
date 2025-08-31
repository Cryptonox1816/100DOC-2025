//write a program to display the month name and number of days using switch-case for a given month number.

#include<stdio.h>
int main(){
    int m;
    printf("enter month number\n");
    scanf("%d", &m);
    switch (m) {
        case 1: printf("january has 31 days");
              break;
        case 2 : printf("february has 28 days");
              break;
        case 3 : printf("march has 31 days");
              break;
        case 4 : printf("april has 30 days");
              break;
        case 5 : printf("may has 31 days");
              break;
        case 6 : printf("june has 30 days");
              break;
        case 7 : printf("july has 31 days");
              break;
        case 8 : printf("august has 31 days");
              break;
        case 9 : printf("september has 30 days");
              break;
        case 10 : printf("october has 31 days");
              break;
        case 11 : printf("november has 30 days");
              break;
        case 12 : printf("december has 31 days");
              break;
        default : printf("invalid input");
    }
     

    return 0;
}