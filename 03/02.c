#include <stdio.h>

int main()
{

    // Leia o salário e imprima se ganha mais que o mínimo;

    float salario;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    if (salario > 1320)
    {
        printf("Salario acima do valor minimo");
    }
    else
    {
        printf("Salario abaixo do valor minimo");
    }

    return 0;
}