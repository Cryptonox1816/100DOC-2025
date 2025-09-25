#include <stdio.h>

void readMatrix(int matrix[10][10], int rows, int cols) {
    printf("Enter elements of %d×%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[10][10], int rows, int cols) {
    printf("\nMatrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[10][10];
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    readMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    return 0;
}
