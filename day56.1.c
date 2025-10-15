#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

// Stack structure
typedef struct {
    int data[MAX];
    int top;
} Stack;

// Stack operations
void push(Stack *s, int value) {
    s->data[++(s->top)] = value;
}

int pop(Stack *s) {
    return s->data[(s->top)--];
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int peek(Stack *s) {
    return s->data[s->top];
}

// Function to print next greater elements
void printNextGreater(int arr[], int n) {
    int result[n];
    Stack s;
    s.top = -1;

    for (int i = n - 1; i >= 0; i--) {
        // Pop elements smaller than or equal to arr[i]
        while (!isEmpty(&s) && peek(&s) <= arr[i]) {
            pop(&s);
        }

        // If stack is empty, no greater element
        result[i] = isEmpty(&s) ? -1 : peek(&s);

        // Push current element to stack
        push(&s, arr[i]);
    }

    // Output result
    printf("Next Greater Elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d -> %d\n", arr[i], result[i]);
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printNextGreater(arr, n);
    return 0;
}
