#include<stdio.h>

int main(){

    //Escreva um programa que receba um número qualquer e mostre o seu dobro.

    //exposição da(s) variaveis
    int num;
    int dobro;

    //entrada de dado(s)
    printf("Digite um numero: ");
    scanf("%i", &num);

    //operação(ões) realizada(s)
    dobro = num * 2;

    //apresentação do resultado
    printf("O dobro desse numero e: %d \n", dobro);


    return 0;
}
