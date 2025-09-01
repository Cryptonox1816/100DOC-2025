//Write a program to calculate a library fine based on late days.
#include<stdio.h>
int main(){
    int lateD;
    printf("enter number of late days :");
    scanf("%d",&lateD);
    if(lateD<5){
        printf("fine is \n %d", (lateD * 2));
    }
    else if(lateD>=5 && lateD<=10){
        printf("fine is \n %d", (lateD * 4));
    }
    else if(30>lateD>10){
        printf("fine is \n %d", (lateD * 6));
    }
    else {
        printf("membership cancelled");
    }
    






    return 0;
}