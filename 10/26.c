#include <stdio.h>
#include <math.h>

#define MAX 10

int main() {
    double v[MAX];
    double media = 0, valorGuardado = 0;

    printf("Digite 10 valores:\n");
    for (int i = 0; i < MAX; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%lf", &v[i]);
        media += v[i];
    }
    media /= MAX;

    // Calcula o desvio padrão
    for (int i = 0; i < MAX; i++) {
        valorGuardado += pow((v[i] - media), 2);
    }
    valorGuardado = sqrt(valorGuardado / (MAX - 1));

    // Imprime os valores e resultados
    printf("Valores: { ");
    for (int i = 0; i < MAX; i++) {
        printf("%.2lf", v[i]);
        if (i != MAX - 1)
            printf(", ");
        else
            printf(" }\n");
    }

    printf("Média: %.2lf\n", media);
    printf("Desvio padrão: %.2lf\n", valorGuardado);

    return 0;
}
