#include<stdio.h> 
int main()
{
    /*
    1 - declaração de usuário
    2 - entrada dde dados para armazenamento
    3 - apresentação de dados  
    4 - escrever o algoritmo
    */
    
    int idade;
    double peso;
    float salario;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu peso:");
    scanf("%lf", &peso);
    printf("Digite seu salario:");
    scanf("%f", &salario);

    printf("as informações inseridas foram: Idade: %d, Peso: %.3lf, Salario: R$%.2f \n", idade, peso, salario);
}

