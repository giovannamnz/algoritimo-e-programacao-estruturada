#include <stdio.h>

int main()
{

    // Leia o peso e imprima se é menor que 60kg;

    int peso;

    printf("Digite seu peso: ");
    scanf("%d", &peso);

    if (peso < 60)
    {
        printf("Voce esta dentro do limite");
    }
    else
    {
        printf("Voce esta acima do limite");
    }

    return 0;
}