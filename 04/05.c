#include <stdio.h>

int main()
{

    // Construir um algoritmo que leia um número e imprima se ele é igual a 5, a 200, a 400, se está no intervalo entre 500 e 1000, ou se ela está fora dos escopos anteriores.

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    

    if (num == 5)
    {
        printf("%d", num);
    }

    else if (num == 200)
    {
        printf("%d", num);
    }

    else if(num == 400)
    {
        printf("%d", num);
    }

    else if((num > 500) && (num < 1000))
    {
        printf("%d", num);
    }

    else
    {
        printf("Numero fora dos escopos");
    }
    
    

    return 0;
}
