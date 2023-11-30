#include <stdio.h>
#include <math.h>

int main() {
    
    // declaration of vectors
    float vectorOne[10];
    float squaredNum[10];

    // reading real numbers
    printf("Digite 10 numeros reais:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%f", &vectorOne[i]);
    }

    //computing

    // calculating the square of numbers
    for(int i = 0; i < 10; i++) {
        squaredNum[i] = pow(vectorOne[i], 2);
    }

    // printing of numbers and their squares
    printf("\nNumeros e seus quadrados:\n\n");
    for(int i = 0; i < 10; i++) {
        printf("Numero: %.2f, Ao quadrado: %.2f\n", vectorOne[i], squaredNum[i]);
    }

    return 0;
}
