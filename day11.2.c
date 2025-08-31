//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main() {
    float cp , sp;
    printf("enter cp and sp");
    scanf("%f%f",&cp,&sp);
    float profit = sp - cp;
    float loss = cp - sp;
    if(sp>cp){
        printf("profit percentage is : %f \n", profit/cp*100);
    }
    else if (cp>sp){
         printf("loss percentage is : %f \n", loss/cp*100);
    }
    else{
        printf("no profit no loss");
    }
 
       





    






    return 0;
}