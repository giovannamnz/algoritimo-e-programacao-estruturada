#include<stdio.h>

int main(){
    
    //Construa um algoritmo que dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. 

    int a, b, c, menor, maior;

   printf("Digite 3 numeros: ");
   scanf("%d %d %d", &a, &b, &c);

   // encontrando o menor
    if(a < b){
        if(a < c)
            menor = a;
        else
            menor = c;
    }
    else{
        if(b < c)
            menor = b;
        else
            menor = c;
    }

    // encontrando o maior
    if(a > b){
        if(a > c)
            maior = a;
        else
            maior = c;
    }
    else{
        if(b > c)
            maior = b;
        else
            maior = c;
    }

    printf("Primeira versao\tMenor: %d\tMaior: %d\n", menor, maior);

    


    return 0;
}