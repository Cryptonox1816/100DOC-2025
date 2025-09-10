#include <stdio.h>

pint main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Not a perfect number\n");
        return 0;
    }

    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d is a perfect number\n", num);
    } else {
        printf("%d is not a perfect number\n", num);
    }

    return 0;
}
