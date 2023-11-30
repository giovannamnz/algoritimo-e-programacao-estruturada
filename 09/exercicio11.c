#include <stdio.h>

int main() {

    //declaration of vectors
    float vector[10];
    int contNegative = 0;
    float somaPositive = 0;

    //reading numbers
    printf("Digite 10 numeros reais:\n");
    
    //differentiating positive and negative numbers
    for(int i = 0; i < 10; i++) {
        scanf("%f", &vector[i]);
        if(vector[i] < 0) {
            contNegative++;
        } else {
            somaPositive += vector[i];
        }
    }

    //print positive and negative numbers
    printf("\nQuantidade de numeros negativos: %d\n", contNegative);
    printf("Soma dos numeros positivos: %.2f\n", somaPositive);

    return 0;
}
