#include <stdio.h>

int main()
{

  double nota1, nota2, nota3, media, mediaTurma;
  int vetor[30];

  for (int i = 0; i < 30; i++)
  {

    if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10) && (nota3 >= 0 && nota3 <= 10))

      do
      {

        printf("\n____________________________");
        printf("\nDigite a primeira nota: ");
        scanf("%lf", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%lf", &nota2);

        printf("Digite a terceira nota: ");
        scanf("%lf", &nota3);

        if (!((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10) && (nota3 >= 0 && nota3 <= 10)))
          printf("(!) Nota fora dos parametros\n");

      } while (!((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10) && (nota3 >= 0 && nota3 <= 10)));

    media = (((nota1 * 2) + (nota2 * 4) + (nota3 * 4)) / 10);
    if (media >= 7)
    {
      printf("\nAprovado\n");
    }
    else
    {
      printf("\nReprovado\n");
    }

    printf("Media = %.2lf", media);
    mediaTurma += media;
  }

  mediaTurma /= 30;
  printf("\n____________________________");
  printf("\nMedia da turma = %.2lf", mediaTurma);

  return 0;
}
