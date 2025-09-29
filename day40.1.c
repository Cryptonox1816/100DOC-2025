#include <stdio.h>

void diagonalTraversal(int mat[][100], int rows, int cols) {
    for (int sum = 0; sum <= rows + cols - 2; sum++) {
        for (int i = 0; i < rows; i++) {
            int j = sum - i;
            if (j >= 0 && j < cols) {
                printf("%d ", mat[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int mat[100][100];
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    printf("Diagonal Traversal:\n");
    diagonalTraversal(mat, rows, cols);

    return 0;
}
