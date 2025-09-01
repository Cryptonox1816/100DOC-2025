//
#include<stdio.h>
int main() {
    int units;
    printf("enter number of units :\n");
    scanf("%d",&units);
    if (units <51){
        printf("bill is %d \n",units*5);
    }
    else if(50<units<151){
        printf("bill is %f \n",units*6.33);
    }
    else{
        printf("bill is %f \n",units*8.8);
    }




    return 0;
}