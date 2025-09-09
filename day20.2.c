#include <stdio.h>
#include <string.h>

int main() {
    char bin[100];
    printf("Enter binary number: ");
    scanf("%s", bin);
    int len = strlen(bin);
    for(int i = 0; i < len; i++) {
        if(bin[i] == '0') {
            bin[i] = '1';
        } else if(bin[i] == '1') {
            bin[i] = '0';
        }
    }
    printf("1's complement: %s\n", bin);
    return 0;
}
