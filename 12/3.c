#include <stdio.h>

#define N 10

void swapRows(int matrix[N][N], int row1, int row2) {
    for (int j = 0; j < N; j++) {
        int temp = matrix[row1][j];
        matrix[row1][j] = matrix[row2][j];
        matrix[row2][j] = temp;
    }
}

void swapColumns(int matrix[N][N], int col1, int col2) {
    for (int i = 0; i < N; i++) {
        int temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp;
    }
}

void swapDiagonals(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][N - 1 - i];
        matrix[i][N - 1 - i] = temp;
    }
}

void swapRow5WithColumn10(int matrix[N][N]) {
    swapColumns(matrix, 4, 9); // Swap column 4 with column 10
    swapRows(matrix, 4, 5);    // Swap row 5 with row 4 (now containing column 10)
}

void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[N][N]; // Initialize your matrix A here

    // Perform the specified swaps
    swapRows(A, 1, 7);
    swapColumns(A, 3, 9);
    swapDiagonals(A);
    swapRow5WithColumn10(A);

    printf("Modified Matrix:\n");
    printMatrix(A);

    return 0;
}
