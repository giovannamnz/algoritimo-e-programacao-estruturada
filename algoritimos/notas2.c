#include <stdio.h>

/*
aprovado = >=7
recuperação =  4 < x < 6.9
reprovado x < 4
*/

int main()
{

    float nota;
    float frequencia;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    printf("Digite sua frequencia: ");
    scanf("%f", &frequencia);

    if ((nota >= 7) && (frequencia >= 7))
    {
        printf("Aprovado");
    }

    if ((nota >= 4) && (nota < 6.9) && (frequencia >= 7))
    {
        printf("Recuperacao");
    }

    if ((nota <= 4) && (frequencia < 7))
    {
        printf("Reprovado");
    }

    return 0;
}