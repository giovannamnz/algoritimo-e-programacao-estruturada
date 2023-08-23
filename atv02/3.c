#include<stdio.h>

int main (){

    //Dadas as medidas de uma sala, informe sua área.

    //declaração das variáveis
    int base;
    int altura;
    int resul;

    //entrada de dados
    printf("Digite a altura da sala: \n");
    scanf("%d", &altura);

    printf("Digite o comprimento da sala: \n");
    scanf("%d", &base);

    //operação realizada 
    resul = base * altura;

    //apresentação do resultado
    printf("A area total da sala e: %d", resul);


    return 0;
}