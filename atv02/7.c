#include <stdio.h>

int main()
{

    // Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área.

    int raio;
    float calculo;
    float PI = 3.1415;

    printf("Digite o valor do raio: ");
    scanf("%d", &raio);

    calculo = (PI * (raio * raio));

    printf("O valor da area e: %f", calculo);

    return 0;
}