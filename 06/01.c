#include <stdio.h>

int main()
{

    /* Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence, considerando só os seguintes valores:

    61 - Brasília

    71 - Salvador

    11 - São Paulo

    21 - Rio de Janeiro

    32 - Juiz de Fora

    19 - Campinas

    27 - Vitória

    31 - Belo Horizonte

    Qualquer outro - uma cidade no Brasil sem identificação

    */

    // VARIAVEIS
    int ddd;

    // ENTRADA DE DADOS
    printf("Digite o ddd: ");
    scanf("%d", &ddd);

    // POSIBILIDADES
    switch (ddd)
    {

    case 61:
        printf("Brasilia");
        break;

    case 71:
        printf("Salvador");
        break;

    case 11:
        printf("Sao Paulo");
        break;

    case 21:
        printf("Rio de Janeiro");
        break;

    case 32:
        printf("Juiz de Fora");
        break;

    case 19:
        printf("Campinas");
        break;

    case 27:
        printf("Vitoria");
        break;

    case 31:
        printf("Belo Horizonte");
        break;

    default:
        printf("cidade no Brasil sem identificacao");
    }

    return 0;
}