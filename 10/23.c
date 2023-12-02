#include <stdio.h>

#define MAX 5

int main() {
    float A[MAX], B[MAX];
    float produtoEscalar = 0;

    printf("Digite 5 valores reais para o vetor A:\n");
    for (int i = 0; i < MAX; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &A[i]);
    }

    printf("Digite 5 valores reais para o vetor B:\n");
    for (int i = 0; i < MAX; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &B[i]);
    }

    // Calcula o produto escalar
    for (int i = 0; i < MAX; i++)
        produtoEscalar += A[i] * B[i];

    // Imprime os vetores e o produto escalar
    printf("A = { ");
    for (int i = 0; i < MAX; i++) {
        printf("%.2f", A[i]);
        if (i != MAX - 1)
            printf(", ");
        else
            printf(" }\n");
    }

    printf("B = { ");
    for (int i = 0; i < MAX; i++) {
        printf("%.2f", B[i]);
        if (i != MAX - 1)
            printf(", ");
        else
            printf(" }\n");
    }

    printf("O produto escalar é: %.2f\n", produtoEscalar);

    return 0;
}
