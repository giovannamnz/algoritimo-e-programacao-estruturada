#include<stdio.h>

int main(){
   
    //Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.

    //apresentação das variáveis
    float real;
    float dolar;
    float resul;

    //entrada de dados
    printf("Digite o valor em reais a ser convertido: ");
    scanf("%f", &real);

    printf("Digite o valor do dolar atual: ");
    scanf("%f", &dolar);

    //operação realizada
    resul = (double)real / dolar;

    //apresentação do resultado
    printf("O valor em dolar e: %.3f", resul);


    return 0;
}