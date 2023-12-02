#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100 // sets the maximum value that can be generated

int main() {
    int vetor[20], i, j;
    int apareceu[MAX] = {0}; // initializes the array with 0

    srand(time(NULL)); // initializes the seed of the random number generator

    // fills the vector with random numbers
    for (i = 0; i < 20; i++) {
        vetor[i] = rand() % MAX; // generates a random number between 0 and MAX-1
    }

    // checks for repeated values
    for (i = 0; i < 20; i++) {
        if (apareceu[vetor[i]] == 0) {
            apareceu[vetor[i]] = 1;
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}
