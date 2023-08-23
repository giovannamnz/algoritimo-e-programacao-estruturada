#include <stdio.h>

int main(){

    //Escreva um programa que receba dois números e mostre a soma, a subtração, a multiplicação e a divisão desses números.

    //exposição da(s) variaves 
    int dig1;
    int dig2;
    int soma;
    int sub;
    int mult; 

    float div;

    //entrada dos dados 
    printf("Digite um numero: ");
    scanf("%i", &dig1);
    
    printf("Digite outro numero: ");
    scanf("%i", &dig2);

    //operação(ões) realizada(s)
    soma = dig1 + dig2;
    sub = dig1 - dig2; 
    mult = dig1 * dig2;
    div = (float)dig1 / dig2;

    //apresentação dos resultados
    printf("\nResultados: \n\n");
    printf("SOMA: %i\n", soma);
    printf("SUBTRACAO: %i\n", sub);
    printf("MULTIPLICACAO e: %i\n", mult);
    printf("DIVISAO: %.2f\n", div);

    return 0;
}