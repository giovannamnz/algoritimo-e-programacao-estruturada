#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float vetor[5];
    int codigo, i;

    srand(time(NULL)); //initializes the seed of the random number generator

    // fills the vector with random numbers
    for (i = 0; i < 5; i++) {
        vetor[i] = (float)rand()/(float)(RAND_MAX/100); // generates a random number between 0 and 100
        printf("Valor na posicao %d: %.2f\n", i, vetor[i]);
    }

    // generates a random code between 0 and 3
    codigo = rand() % 4;
    printf("Codigo: %d\n", codigo);

    // code Verification
    if (codigo == 0) {
        return 0;
    } else if (codigo == 1) {
        // shows vector in direct order
        for (i = 0; i < 5; i++) {
            printf("%.2f ", vetor[i]);
        }
    } else if (codigo == 2) {
        // shows the vector in reverse order
        for (i = 4; i >= 0; i--) {
            printf("%.2f ", vetor[i]);
        }
    } 
    
    return 0;
}
