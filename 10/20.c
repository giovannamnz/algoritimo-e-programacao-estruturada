#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//sets the maximum number of vectors
#define MAX 10

int main() {
    int vetor1[MAX], vetor2[MAX], j = 0;

    srand(time(NULL)); //initialize the random number generator

    //computing
    for(int i = 0; i < MAX; i++) {
        vetor1[i] = rand() % 51; //generates a random number in the range [0,50]
        if(vetor1[i] % 2 != 0) {
            vetor2[j] = vetor1[i];
            j++;
        }
    }

    //printing results
    printf("\nVetor 1:\n");
    for(int i = 0; i < MAX; i+=2) {
        printf("%d, %d\n", vetor1[i], vetor1[i+1]);
    }

    printf("\nVetor 2:\n");
    for(int i = 0; i < j; i+=2) {
        if(i < j-1)
            printf("%d, %d\n", vetor2[i], vetor2[i+1]);
        else
            printf("%d\n", vetor2[i]);
    }

    return 0;
}
