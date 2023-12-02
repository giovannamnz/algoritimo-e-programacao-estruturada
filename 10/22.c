#include <stdio.h>

int main() {
    
    //defining the Variables
    int A[10], B[10], C[20];

    //defining the vectors
    printf("Digite os elementos do vetor A:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite os elementos do vetor B:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &B[i]);
    }

    //computing
    for(int i = 0; i < 10; i++) {
        C[2*i] = A[i];
        C[2*i+1] = B[i];
    }

    //printing the Values of Variable C
    printf("Os elementos do vetor C sao:\n");
    for(int i = 0; i < 20; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
