#include <stdio.h>

int main() {
    
    //defining the Variables
    int A[10], B[10], C[10];

    //defining the vectors
    printf("Digite os elementos do vetor A:");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    printf("\nDigite os elementos do vetor B:");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &B[i]);
    }

    //computing
    for(int i = 0; i < 10; i++) {
        C[i] = A[i] * B[i];
    }

    //printing the Values of Variable C
    printf("\nOs elementos do vetor C sao:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
