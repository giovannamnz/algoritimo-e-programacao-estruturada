#include <stdio.h>

int main()
{
    /*

    3. Criar um algoritmo que informe a quantidade total de calorias de uma refeição a partir do usuário que deverá informar o prato, a sobremesa e a bebida (veja a tabela a seguir).


      prato        calorias    sobremesa        calorias    bebida         calorias
      --------------------------------------------------------------------------------
      vegetariano   | 180 cal | abacaxi         | 75 cal  | chá               | 20 cal  |
      peixe         | 230 cal | sorvete diet    | 110 cal | suco laranja      | 70 cal  |
      frango        | 250 cal | mouse diet      | 170 cal | suco melão        | 100 cal |
      carne         | 350 cal | mouse chocolate | 200 cal | refrigerante diet | 65 cal  |


    Enumere cada opção de prato, sobremesa e bebida.

    Prato: 1 - vegetariano, 2 – Peixe, 3 – Frango, 4 – Carne;

    Sobremesa: 1 – Abacaxi, 2 – Sorvete diet, 3 – Mouse diet, 4 – Mouse chocolate;

    Bebida: 1 – Chá, 2 - Suco de laranja, 3 – Suco de melão, 4 – Refrigerante diet.

    */

    // VARIAVEIS
    int refPrato, refBebida, refSobremesa;
    float calorias;

    // opções prato principal
    printf("\n---------------------------------------------");
    printf("\nopcoes de prato principal");
    printf("\n---------------------------------------------");
    printf("\n1 - vegetariano");
    printf("\n2 - peixe");
    printf("\n3 - frango");
    printf("\n4 - carne");

    printf("\n\nDigite o numero de referencia do prato principal: ");
    scanf("%d", &refPrato);

    // opções bebidas
    printf("\n---------------------------------------------");
    printf("\nopcoes de bebida");
    printf("\n---------------------------------------------");
    printf("\n1 - cha");
    printf("\n2 - suco de laranja");
    printf("\n3 - suco de melao");
    printf("\n4 - refrigerante diet");

    printf("\n\nDigite o numero de referencia da bebida: ");
    scanf("%d", &refBebida);

    // opções sobremesa
    printf("\n---------------------------------------------");
    printf("\nopcoes de sobremesa");
    printf("\n---------------------------------------------");
    printf("\n1 - abacaxi");
    printf("\n2 - sorvete diet");
    printf("\n3 - mouse diet");
    printf("\n4 - mouse chocolate");

    printf("\n\nDigite o numero de referencia da sobremesa: ");
    scanf("%d", &refSobremesa);

    // POSSIBILIDADES PRATO
    switch (refPrato)
    {

    case 1:
        calorias += 180;
        break;

    case 2:
        calorias += 230;
        break;

    case 3:
        calorias += 250;
        break;

    case 4:
        calorias += 350;
        break;

    default:
        printf("\nNao ha codigo de referencia correspondente a este prato");
    }

    // POSSIBILDADES BEBIDAS
    switch (refBebida)
    {

    case 1:
        calorias += 20;
        break;

    case 2:
        calorias += 70;
        break;

    case 3:
        calorias += 100;
        break;

    case 4:
        calorias += 65;
        break;

    default:
        printf("\nNao ha codigo de referencia correspondente a essa bebida");
    }

    // POSSIBILDADES SOBREMESA
    switch (refSobremesa)
    {

    case 1:
        calorias += 75;
        break;

    case 2:
        calorias += 110;
        break;

    case 3:
        calorias += 170;
        break;

    case 4:
        calorias += 200;
        break;

    default:
        printf("\nNao ha codigo de referencia correspondente a essa sobremesa");
    }

    // SAIDA DE DADOS
    printf("\n---------------------------------------------");
    printf("\nVALOR CALORICO TOTAL");
    printf("\nValor calorico total: %.2f", calorias);

    return 0;
}