#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[10], i;

    srand(time(NULL)); //initializes the seed of the random number generator

    //fills the vector with random numbers between -10 and 10
    for (i = 0; i < 10; i++) {
        vetor[i] = (rand() % 21) - 10;
        printf("Valor na posição %d: %d\n", i, vetor[i]);
    }

    // assigning a value of 0 to negative elements
    for (i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    // vector printing
    printf("Vetor após substituição de valores negativos por 0:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
