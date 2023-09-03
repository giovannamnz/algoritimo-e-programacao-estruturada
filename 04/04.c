#include<stdio.h>

int main(){
   
   //Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma descendente (do maior para o menor).

   int a, b, c, maior, meio, menor;

   printf("Digite 3 numeros: ");
   scanf("%d %d %d", &a, &b, &c);

   //maior

     if ((a > b) && (a > c)){
        maior = a;
    }

    if ((b > a) && (b > c)){
        maior = b;
    }

    if ((c > b) && (c > a)){
        maior = c;
    }

   //meio

    if (a > b && a < c){
      meio = a;
    }
    

    if (b > a && b < c){
      meio = b;
    }

    if (c > a && c < b){
      meio = c;
    }

    //menor
    if ((a < b) && (a < c)){
        menor = a;
    }

    if ((b < a) && (b < c)){
        menor = b;
    }

    if ((c < b) && (c < a)){
        menor = c;
    }


   printf("Numeros em ordem ascendente: %d %d %d", maior, meio, menor);

   return 0;
}

//numeros 0 e 10 tão dando erro