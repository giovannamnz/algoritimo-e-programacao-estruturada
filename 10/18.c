#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[10], r, i, count = 0;

    srand(time(NULL)); //initializes the seed of the random number generator

    //fills the vector with random numbers between 1 and 20
    for (i = 0; i < 10; i++) {
        vetor[i] = rand() % 20 + 1;
        printf("Valor na posicao %d: %d\n", i, vetor[i]);
    }

    //generates a random number between 1 and 10 for r
    r = rand() % 10 + 1;
    printf("Numero r: %d\n", r);

    // checks multiples of r in vector
    printf("Multiplos de %d no vetor: ", r);
    for (i = 0; i < 10; i++) {
        if (vetor[i] % r == 0) {
            printf("%d ", vetor[i]);
            count++;
        }
    }

    // shows the number of multiples of r
    printf("\nQuantidade de multiplos de %d: %d\n", r, count);

    return 0;
}
