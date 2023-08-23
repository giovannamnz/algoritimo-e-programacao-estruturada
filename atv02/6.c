#include<stdio.h>

int main(){

    //Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.


    //apresentação das variáveis
    float custo;
    float frete;
    float taxas;
    float venda;
    float valorBruto;
    double lucro;


    printf("\n___________________ ");
    printf("\nCalcule o seu lucro: \n");
    printf("___________________ \n");

    //entrada de dados
    printf("\nDigite o valor do produto: ");
    scanf("%f", &custo);

    printf("Digite o valor do frete: ");
    scanf("%f", &frete);

    printf("Digite as taxas do produto: ");
    scanf("%f", &taxas);

    //calculo do custo total do produto
    valorBruto = custo + frete + taxas;

    printf("___________________ \n"); 

    //apresentação do custo do produto
    printf("\nO custo total foi: %.0f", valorBruto);

    //entrada do valor da venda
    printf("\nDigite o valor da venda: ");
    scanf("%f", &venda);

    //cálculo do lucro
    lucro = ((venda - valorBruto) * 100)/valorBruto;

    //apresentação do lucro
    printf("\nO lucro total foi de: %.0f%%", lucro);

    printf("\n___________________ ");
    

    return 0;
}