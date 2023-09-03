#include <stdio.h>

int main()
{

    // Construir um algoritmo que leia um número e imprima se ele é igual a 5, a 200, a 400, se está no intervalo entre 500 e 1000, ou se ela está fora dos escopos anteriores.

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    

    if (num == 5)
    {
        printf("numero diferente de 5");
    }

    else if (num == 200)
    {
        printf("numero diferente de 200");
    }

    else if(num == 400)
    {
        printf("numero diferente de 400");
    }

    else if((num > 500) && (num < 1000))
    {
        printf("numero nao esta contido entre 500 e 1000");
    }

    else
    {
        printf("Numero fora dos escopos");
    }
    
    

    return 0;
}