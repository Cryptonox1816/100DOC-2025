//Write a program to display the day of the week based on a number (1–7) using switch-case.

#include<stdio.h>
int main() {
    int day;
    scanf("%d", &day);
    switch (day){
        case 1 : printf("monday\n");
            break;
        case 2 :("tuesday\n");
            break;
        case 3 : printf("wednesday\n");
            break;
        case 4 : printf("thursda\n");
            break;
        case 5 : printf("friday\n");
            break;
        case 6 : printf("saturday\n");
            break;
        case 7 : printf("sunday\n");
            break;
        default : printf("invalid input\n");
    }






    return 0;
}