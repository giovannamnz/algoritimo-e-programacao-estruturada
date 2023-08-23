#include<stdio.h>

int main(){

    int x = 20, y = 10, resultado; /*a soma geralmente fica aqui*/

    //condição = se x for maior que y entao sera realizada a soma dos valores e apresentada soma. senao apresentar uma mensagem informando que nao podera ser realizada a soma 

if( x <  y ){

        //executa este trecho
        int soma; 
        soma = x + y;
        printf("Soma: %d", soma); 

        /* caso seja falso, nada será apresentado */

    }else{

       printf("A expresao e falsa por isso bla bla bla");

    }

    printf("\nContinua a execucao do algoritmo");


}