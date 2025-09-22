#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};  // To store frequency of digits 0-9
    int digit, maxFreq = 0, mostFreqDigit = 0;

    // Input the number
    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if (num < 0) num = -num;

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find the digit with maximum frequency
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreqDigit = i;
        }
    }

    printf("Most frequent digit is: %d\n", mostFreqDigit);
    return 0;
}
