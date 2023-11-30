#include <stdio.h>

int main() {

    //declaration of vectors
    int vector[6];
    int num;

    //reading numbers
    printf("Digite 6 numeros inteiros pares:\n");

    //checking if the numbers are even
    for(int i = 0; i < 6; i++) {
        do {
            scanf("%d", &num);
            if(num % 2 == 0) {
                vector[i] = num;
                break;
            } else {
                printf("(!) Numero nao e par. Por favor, digite novamente.\n");
            }
        } while(1);
    }

    //printing the numbers in reverse order
    printf("\nValores na ordem inversa:\n");
    for(int i = 5; i >= 0; i--) {
        printf("%d ", vector[i]);
    }

    return 0;
}
