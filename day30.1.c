#include <stdio.h>

int main() {
    int size, i;
    int even = 0, odd = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < size; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Total Even Numbers: %d\n", even);
    printf("Total Odd Numbers: %d\n", odd);

    return 0;
}
