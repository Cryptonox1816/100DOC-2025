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

int sumMatrix(int matrix[10][10], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main() {
    int matrix[10][10];
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    readMatrix(matrix, rows, cols);
    int total = sumMatrix(matrix, rows, cols);

    printf("\nSum of all elements = %d\n", total);

    return 0;
}
