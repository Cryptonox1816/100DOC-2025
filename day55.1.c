#include <stdio.h>

int findMajorityElement(int nums[], int n) {
    int count = 0, candidate = -1;

    // Step 1: Find a candidate using Boyer-Moore Voting Algorithm
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify if the candidate is actually a majority
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2)
        return candidate;
    else
        return -1;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = findMajorityElement(nums, n);
    printf("Majority Element: %d\n", result);

    return 0;
}
