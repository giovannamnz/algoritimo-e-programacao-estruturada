#include <stdio.h>

#define MAX 3

int main() {
    int v[MAX], apenasPrimos[MAX], posicoesPrimos[MAX], contadorDeDivisores = 0, maiorNumero = 0, nPrimos = 0;

    printf("Digite 10 números:\n");
    for (int i = 0; i < MAX; i++) {
        printf("Número %d: ", i + 1);
        scanf("%i", &v[i]);
    }

    // Encontra o maior número para verificar se é primo ou não
    maiorNumero = v[0];
    for (int i = 0; i < MAX; i++) {
        if (maiorNumero <= v[i])
            maiorNumero = v[i];
    }

    // Verifica se cada número é primo
    for (int i = 0; i < MAX; i++) {
        contadorDeDivisores = 0;

        // Verifica se o número é primo até o maior número presente no vetor
        for (int j = 1; j <= maiorNumero; j++) {
            if (v[i] % j == 0)
                contadorDeDivisores++;
        }

        // Adiciona os primos aos vetores apenasPrimos e posicoesPrimos
        if (contadorDeDivisores == 2) {
            apenasPrimos[nPrimos] = v[i];
            posicoesPrimos[nPrimos] = i;
            nPrimos++;
        }
    }

    // Imprime os números primos e suas posições
    printf("apenasPrimos = { ");
    for (int i = 0; i < nPrimos; i++) {
        printf("%i (%i)", apenasPrimos[i], posicoesPrimos[i]);
        if (i != nPrimos - 1)
            printf(", ");
        else
            printf(" }\n");
    }

    return 0;
}
