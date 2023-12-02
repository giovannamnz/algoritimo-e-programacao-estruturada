#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[10], i, j;

    srand(time(NULL)); //initializes the seed of the random number generator

    // fills the vector with random numbers
    for (i = 0; i < 10; i++) {
        vetor[i] = rand() % 10; // generates a random number between 0 and 9
        printf("Valor na posição %d: %d\n", i, vetor[i]);
    }

    // checks for equal values
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("Valor igual encontrado: %d\n", vetor[i]);
            }
        }
    }

    return 0;
}

