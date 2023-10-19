#include <stdio.h>

int main()
{

    int opcao, quantidade;
    float total = 0; 

    do
    {
        printf("\n--TABELA DE PRECOS--\n");
        printf("Lista de frutas: ");
        printf("\n\n1. ABACAXI: \nPreco: 5.00 a unidade");
        printf("\n\n2. MACA: \nPreco: 1.00 a unidade");
        printf("\n\n3. PERA: \nPreco: 4.00 a unidade");
        printf("\n\n0. SAIR \n");

        printf("\nDigite o codigo do produto: ");
        scanf("%d", &opcao);

        if(opcao == 0){
            break;
        }     

        printf("\nDigite a quantidade: ");
        scanf("%d", &quantidade);           

        switch (opcao)
        {
        case 1:
            total += 5.0 * quantidade;
            break;

        case 2:
            total += 1.0 * quantidade;
            break;

        case 3:
            total += 4.0 * quantidade;
            break;

        default:
            printf("(!) Codigo nao encontrado no nosso banco de dados. Por favor, digite um codigo valido");
            break;
        }

        //printf("\n\nDeseja adicionar mais alguma coisa ao carrinho? (digite 1 para sim e 2 para nao)");
        //scanf("%d", &confirmacao);
        } while (opcao != 0);

        printf("\nValor total: RS%.2f", total);

        return 0; 

    }