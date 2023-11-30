#include <stdio.h>

int main() {

    //declaration of vectors
    int vector[6];

    //reading numbers
    printf("Digite 6 numeros inteiros:\n");
    for(int i = 0; i < 6; i++) {
        scanf("%d", &vector[i]);
    }

    //printing the numbers in reverse order
    printf("\nValores na ordem inversa:\n");
    for(int i = 5; i >= 0; i--) {
        printf("%d ", vector[i]);
    }

    return 0;
}
