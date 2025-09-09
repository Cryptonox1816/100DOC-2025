#include <stdio.h>
#include <stdlib.h>

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);
    
    // Handle negative numbers
    if (num < 0) {
        num = llabs(num);
    }
    
    long long product = 1;
    
    // Special case for 0
    if (num == 0) {
        printf("Product of odd digits: 1\n");
        return 0;
    }
    
    // Extract digits and multiply odd ones
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
        }
        num /= 10;
    }
    
    printf("Product of odd digits: %lld\n", product);
    return 0;
}
