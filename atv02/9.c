#include<stdio.h>

int main(){

    //Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.

    float salario;
    float reajuste;
    float salarioNovo;
    float salarioFinal;

    printf("Digite seu salario anterior: ");
    scanf("%f", &salario);

    printf("Digite a porcentagem de reajuste: ");
    scanf("%f", &reajuste);

    salarioFinal = (salario * (reajuste/100)) + salario;

    
    printf("Salario atual: %f", salarioFinal);

    return 0;
}