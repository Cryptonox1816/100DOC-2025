//Write a program to take a number as input and print its equivalent binary representation.

#include<stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }
    
    int binary[32]; // Array to store binary digits
    int i = 0;
    
    // Convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    
    printf("Binary representation: ");
    // Print binary in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
    
    return 0;
}
