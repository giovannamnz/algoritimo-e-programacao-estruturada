#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 61
#define COLS 10

void fillRandomMatrix(int matrix[ROWS][COLS]) {
    srand(time(NULL)); // Seed the random number generator

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = rand() % 100; // Generate random integers between 0 and 99
        }
    }
}

int main() {
    int randomMatrix[ROWS][COLS];

    // Fill the matrix with random numbers
    fillRandomMatrix(randomMatrix);

    // Print the random matrix
    printf("Matriz aleatoria:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", randomMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
