#include <stdio.h>

#define MAX 10

void inputMatrix(int mat[MAX][MAX], int rows, int cols, char name) {
    printf("Enter elements of Matrix %c (%dx%d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);
}

void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
                result[i][j] += A[i][k] * B[k][j];
        }
}

void printMatrix(int mat[MAX][MAX], int rows, int cols) {
    printf("Resultant Matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];
    int r1, c1, r2, c2;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of A must equal rows of B.\n");
        return 1;
    }

    inputMatrix(A, r1, c1, 'A');
    inputMatrix(B, r2, c2, 'B');

    multiplyMatrices(A, B, result, r1, c1, r2, c2);
    printMatrix(result, r1, c2);

    return 0;
}
