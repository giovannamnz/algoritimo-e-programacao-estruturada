#include <stdio.h>

int main()
{

    float total, valor;
    int confirmacao, codigo;

    do
    {
        printf("--TABELA DE PRECOS--\n\n");
        printf("Lista de frutas: ");
        printf("\n\n1. ABACAXI: \nPreco: 5.00 a unidade");
        printf("\n\n2. MACA: \nPreco: 1.00 a unidade");
        printf("\n\n3. PERA: \nPreco: 4.00 a unidade");
        scanf("%d", codigo);

        switch (codigo)
        {
        case 1:
            total += 5;
            break;

        case 2:
            total += 1;
            break;

        case 3:
            total += 4;
            break;
        default:
            printf("(!) Codigo nao encontrado no nosso banco de dados. Por favor, digite um codigo valido");
            break;
        }

        printf("Deseja adicionar mais alguma coisa ao carrinho? (digite 1 para sim e 2 para nao");
        scanf("%d", &confirmacao);
        } while (confirmacao !- 1);

        print("O total a pagar eh: RS%.2f", total);

        return 0; 

    }

    return 0;
}