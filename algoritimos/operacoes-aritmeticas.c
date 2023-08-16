#include<stdio.h>

int main(){

    //operadores atirmeticos
    //some (+), subtração (-), divisão (/)
    //multiplicação (*), módulo (%), potência (**)
    //atenção à ordem de precedência

    int num1 = 10, num2 = 50; /* variaveis declaradas */
    int soma;
    soma = num1 + num2; 

    printf("Digite dois numeros inteiros \n");
    scanf("%d %d", &num1, &num2);

    soma = num1 + num2;

    printf("A soma e: %d", soma);

    return 0;


}