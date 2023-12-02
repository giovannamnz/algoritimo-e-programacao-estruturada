#include <stdio.h>

#define MAX 10

int main() {
    int index[MAX];
    float altura[MAX];
    float maior, menor;
    int menorIndex, maiorIndex;

    printf("Digite 10 matrículas dos alunos:\n");
    for (int i = 0; i < MAX; i++) {
        printf("Matrícula do aluno %d: ", i + 1);
        scanf("%i", &index[i]);
    }

    printf("Digite 10 alturas (em metros):\n");
    for (int i = 0; i < MAX; i++) {
        printf("Altura do aluno %i: ", index[i]);
        scanf("%f", &altura[i]);
    }

    // Encontra a maior altura
    maior = altura[0];
    for (int i = 0; i < MAX; i++) {
        if (maior <= altura[i]) {
            maior = altura[i];
            maiorIndex = index[i];
        }
    }

    // Encontra a menor altura
    menor = altura[0];
    for (int i = 0; i < MAX; i++) {
        if (menor >= altura[i]) {
            menorIndex = index[i];
            menor = altura[i];
        }
    }

    // Imprime os índices, alturas, maior e menor
    printf("ÍNDICES = { ");
    for (int i = 0; i < MAX; i++) {
        printf("%i", index[i]);
        if (i != MAX - 1)
            printf(", ");
        else
            printf(" }\n");
    }

    printf("ALTURAS = { ");
    for (int i = 0; i < MAX; i++) {
        printf("%.2f", altura[i]);
        if (i != MAX - 1)
            printf(", ");
        else
            printf(" }\n");
    }

    printf("MAIOR: altura(%.2f), índice(%i)\nMENOR: altura(%.2f), índice(%i)\n", maior, maiorIndex, menor, menorIndex);

    return 0;
}
