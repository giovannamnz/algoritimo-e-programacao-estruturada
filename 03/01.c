#include <stdio.h>

int main()
{

    // Leia a idade e imprima se a pessoa é maior de idade

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {

        /*pra negar tem que colocar entre parenteses e !*/
        printf("Maior de idade");
    }
    else
    {
        printf("Menor de idade");
    }

    return 0;
}