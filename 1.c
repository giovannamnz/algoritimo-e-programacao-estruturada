#include <stdio.h>
#include <math.h>

int main()
{

    int valor = 0, operacao;

    printf("Digite o valor de X: ");
    scanf("%d", &valor);

    operacao = (((5 * valor) + 3) / sqrt((valor * valor) - 16));

    printf("X: %d", operacao);

    return 0;
}