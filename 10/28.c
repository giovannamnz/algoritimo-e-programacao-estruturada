#include <stdio.h>

#define MAX 10

int main() {
    int v[MAX], v1[MAX], v2[MAX], countPar = 0, countImpar = 0;

    printf("Digite 10 números inteiros: ");
    for (int i = 0; i < MAX; i++)
        scanf("%i", &v[i]);

    // Separa os números pares e ímpares em v1 e v2
    for (int i = 0; i < MAX; i++) {
        if (v[i] % 2 == 0) {
            v1[countPar] = v[i];
            countPar++;
        } else {
            v2[countImpar] = v[i];
            countImpar++;
        }
    }

    // Imprime os vetores v1 e v2
    printf("v1 = { ");
    for (int i = 0; i < countPar; i++) {
        printf("%i", v1[i]);
        if (i != countPar - 1)
            printf(", ");
        else
            printf(" }\n");
    }

    printf("v2 = { ");
    for (int i = 0; i < countImpar; i++) {
        printf("%i", v2[i]);
        if (i != countImpar - 1)
            printf(", ");
        else
            printf(" }\n");
    }

    return 0;
}
