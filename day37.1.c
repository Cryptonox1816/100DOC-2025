#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSum[rows];

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0; // Initialize sum for each row
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j]; // Add to row sum
        }
    }

    // Output row sums
    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
