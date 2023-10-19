#include <stdio.h>

int main()
{
  char MF, olho, cabelo;
  double salario = 0, porcen;
  int idade = 0, total, pessoasCarac, caracTotal;

  do
  {
    printf("_________________________________");
    printf("\nCADASTRO DE PESSOAS PARA PESQUISA\n");
    printf("|DIGITE -1 PARA CANCELAR OU SAIR|\n");
    printf("---------------------------------\n");

    caracTotal = 0;

    idade = 0;

    while (!(idade >= 10 && idade <= 100))
    {
      fflush(stdin);

      printf("IDADE");
      printf("\n[ ]: ");
      scanf("%d", &idade);

      if (idade == -1)
        break;

      if (!(idade >= 10 && idade <= 100))
        printf("(!) COMANDO INVALIDO\n");

      if ((idade >= 18) && (idade <= 35))
        caracTotal++;
    }

    if (idade == -1)
      break;

    MF = 'x';

    while (!(MF == 'm' || MF == 'f'))
    {
      fflush(stdin);

      printf("\nGENERO");
      printf("\nDIGITE 'm' PARA MASCULINO; DIGITE 'f' PARA FEMININO");
      printf("\n[ ]: ");
      scanf("%s", &MF);

      if (!(MF == 'm' || MF == 'f'))
        printf("(!) COMANDO INVALIDO\n");

      if (MF == 'f')
        caracTotal++;
    }

    olho = 'x';

    while (!(olho == 'a' || olho == 'v' || olho == 'c' || olho == 'p'))
    {
      fflush(stdin);

      printf("\nCOR DO OLHO: ");
      printf("\nDIGITE 'a' PARA AZUL; DIGITE 'v' PARA VERDES; DIGITE 'c' PARA CASTANHOS; DIGITE 'p' PARA PRETOS");
      printf("\n[ ]: ");
      scanf("%s", &olho);

      if (!(olho == 'a' || olho == 'v' || olho == 'c' || olho == 'p'))
        printf("(!) COMANDO INVALIDO\n");

      if (olho == 'c')
        caracTotal++;
    }

    cabelo = 'x';

    while (!(cabelo == 'l' || cabelo == 'c' || cabelo == 'p' || cabelo == 'r'))
    {
      fflush(stdin);

      printf("\nCOR DO CABELO");
      printf("\nDIGITE 'l' PARA LOIRO; DIGITE 'c' PARA CASTANHO; DIGITE 'p' PARA PRETO; DIGITE 'r' PARA RUIVO");
      printf("\n[ ]: ");
      scanf("%s", &cabelo);

      if (!(cabelo == 'l' || cabelo == 'c' || cabelo == 'p' || cabelo == 'r'))
        printf("(!) COMANDO INVALIDO\n");

      if (cabelo == 'c')
        caracTotal++;
    }

    salario = -1;

    while (salario < 0)
    {
      fflush(stdin);

      printf("\nSALARIO");
      printf("\n[ ]:");
      scanf("%lf", &salario);

      if (salario < 0)
        printf("(!) COMANDO INVALIDO\n");
    }

    if (caracTotal == 4)
      pessoasCarac++;

    total++;

  } while (idade != -1);

  porcen = pessoasCarac * 100 / total;

  printf("A quantidade total de entrevistados foi de %d", total);
  printf("O total de indivíduos do sexo feminino, com idade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos é %d, sendo %%%.0f", pessoasCarac, porcen);

  return 0;
}