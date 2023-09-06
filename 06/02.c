#include <stdio.h>

int main()
{

    /*
    2.O cardápio de uma lanchonete é o seguinte:

       especificação                 preço unitario
       ---------------------------------------------
       100 - cachorro quente      |      R$ 10,10
       101 - bauru simples        |      R$ 8,30
       102 - bauru com ovo        |      R$ 8,50
       103 - hamburguer           |      R$ 12,50
       104- cheeseburguer         |      R$ 13,25

    Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item. */

    // VARIAVEIS
    int refItem, quantidade;
    float preco;
    char *nomeItem;

    // APRESENTAÇÃO DOS DADOS
    printf(" especificacao                 preco unitario");
    printf("\n---------------------------------------------");
    printf("\n100 - cachorro quente      |      R$ 10,10");
    printf("\n101 - bauru simples        |      R$ 8,30");
    printf("\n101 - bauru com ovo        |      R$ 8,30");
    printf("\n103 - hamburguer           |      R$ 12,50");
    printf("\n104- cheeseburguer         |      R$ 13,25");

    // ENTRADA DE DADOS
    printf("\n\nDigite aqui o codigo do pedido: ");
    scanf("%d", &refItem);

    printf("Digite aqui a quantidade do pedido: ");
    scanf("%d", &quantidade);

    // POSSIBILIDADES
    switch (refItem)
    {

    case 100:
        preco = 10.10 * quantidade;
        nomeItem = "Cachorro quente";
        break;

    case 101:
        preco = 8.30 * quantidade;
        nomeItem = "Bauru Simples";
        break;

    case 102:
        preco = 8.50 * quantidade;
        nomeItem = "Bauru com Ovo";
        break;

    case 103:
        preco = 12.50 * quantidade;
        nomeItem = "Hamburguer";
        printf("* Quantidade de itens: %d\n* Item: %s\n* Valor total eh: R$%.2f\n", quantidade, nomeItem, preco);
        break;

    case 104:
        preco = 13.25 * quantidade;
        nomeItem = "Cheeseburger";
        break;

    default:
        printf("\n---------------------------------------------");
        printf("\nNao ha codigo de referencia correspondente a sua ordem no sistema");
        return 1;
    }

    // SAIDA DE DADOS
    printf("\n---------------------------------------------");
    printf("\n                 CUPOM FISCAL");

    printf("\n---------------------------------------------");
    printf("\nITEM: %s", nomeItem);
    printf("\n                            -----------------");
    printf("\nQUANTIDADE DE ITENS:                         %d \nTOTAL:                                 R$%.2f\n", quantidade, preco);

    return 0;
}