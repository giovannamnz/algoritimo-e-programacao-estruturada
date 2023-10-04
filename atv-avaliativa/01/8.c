#include <stdio.h>

int main()
{
  float salario, media_salario = 0;
  int num_filhos, total_filhos = 0, num_pessoas = 0, num_salarios_ate_100 = 0;
  float maior_salario = 0;

  while (1)
  {
    printf("digite um salario [ou digite um numero negativo para sair]:\n");
    scanf("%f", &salario);
    if (salario < 0)
    {
      break;
    }

    printf("digite o num de filhos:\n");
    scanf("%d", &num_filhos);

    media_salario += salario;
    total_filhos += num_filhos;
    num_pessoas++;

    if (salario > maior_salario)
    {
      maior_salario = salario;
    }

    if (salario <= 100)
    {
      num_salarios_ate_100++;
    }
  }

  printf("\nMedia do salario da populacao: R$%.2f\n", media_salario / num_pessoas);
  printf("Media do numero de filhos: %.2f\n", (float)total_filhos / num_pessoas);
  printf("Maior salario: R$%.2f\n", maior_salario);
  printf("Percentual de pessoas com salario ate R$100,00: %.2f%%\n", (float)num_salarios_ate_100 / num_pessoas * 100);

  return 0;
}
