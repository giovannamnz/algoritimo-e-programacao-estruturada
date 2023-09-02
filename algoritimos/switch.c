#include <stdio.h>

int main()
{

   int valor;

   printf("Digite o numero correspondente ao dia da semana ");
   scanf("%d", &valor);

   switch (valor)
   {

      // posibilidades

   case 1:
      printf("Domingo");
      break;

   case 2:
      printf("Segunda");
      break;

   case 3:
      printf("Terca");
      break;

   case 4:
      printf("Quarta");
      break;

   case 5:
      printf("Quinta");
      break;

   case 6:
      printf("Sexta");
      break;

   case 7:
      printf("Segunda");
      break;

   default:
      printf("Sem correspondencia");
   }

   return 0;
}
