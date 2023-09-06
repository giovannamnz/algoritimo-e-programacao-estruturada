#include <stdio.h>

int main()
{

    /*

    Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salario atual e o tempo de serviço de cada funcionário. Os funcionários com menor salario terão um aumento proporcionalmente maior do que os funcionários  com um salario maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário. Faça um programa que leia:

    • o valor do salario atual do funcionário;

    • o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).

    Use as tabelas abaixo para calcular o salario reajustado deste funcionário e imprima o valor do salario final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum aumento.

       salario atual       reajuste     tempo de serviço     bonus
      -------------------------------------------------------------
      até 500,00       |      25%     | abaixo de 1 ano  | sem bonus |
      até 1000,00      |      20%     |  de 1 a 3 anos   |   100,00  |
      até 1500,00      |      15%     | de 4 a 6 anos    |   200,00  |
      até 2000,00      |      10%     | de 7 a 10 anos   |   300,00  |
      acima de 2000,00 | sem reajuste | mais de 10 anos  |   500,00  |


    */

    float tempo, salario, reajuste;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Digite o seu tempo de servico: ");
    scanf("%f", &tempo);

    if (salario <= 500)
    {
        reajuste = (salario * 0.25) + salario;
    }
    else if (salario <= 1000)
    {
        reajuste = (salario * 0.20) + salario;
    }
    else if (salario <= 1500)
    {
        reajuste = (salario * 0.15) + salario;
    }
    else if (salario <= 2000)
    {
        reajuste = (salario * 0.10) + salario;
    }
    else
    {
        // não tem porcentagem de reajuste
        reajuste = salario;
    }

    if (tempo < 1)
    {
        reajuste += 0;
    }
    else if (tempo >= 1 && tempo <= 4)
    {
        reajuste += 100;
    }
    else if (tempo >= 4 && tempo < 7)
    {
        reajuste += 200;
    }
    else if (tempo >= 7 && tempo < 11)
    {
        reajuste += 300;
    }
    else 
    {
        reajuste += 500;  
    }

    if(tempo < 1 && salario >= 2000){
        printf("Não tem direito a aumento");
    }else{
        printf("Salario com o reajuste: %f", reajuste);
    }
    
            


    return 0;
}
