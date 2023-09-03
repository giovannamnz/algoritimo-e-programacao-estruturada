#include <stdio.h>

int main()
{
    //Construa um algoritmo que dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor.
    
    int a, b, c, d, menor, maior;

    printf("Digite quatro numeros: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    //menor
    if (a < b && a < c && a < d){
        menor = a;
    }

    if (b < a && b < c && b < d){
        menor = b;
    }

    if (c < b && c < a && c < d){
        menor = c;
    }

    if (d < b && d < c && d < a){
        menor = d;
    }

    //maior

     if (a > b && a > c && a > d){
        maior = a;
    }

    if (b > a && b > c && b > d){
        maior = b;
    }

    if (c > b && c > a && c > d){
        maior = c;
    }

    if (d > b && d > c && d > a){
        maior = d;
    }


  printf("menor numero: %d\n", menor);
  printf("maior numero: %d\n", maior);
}
