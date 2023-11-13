#include <stdio.h>

float calculaSalario(int contribuicoes)
{
    float salario_base = 600;
    float adicional = 0;

    if (contribuicoes > 50)
    {
        adicional += (contribuicoes - 50) * 0.5;
    }
    if (contribuicoes > 80)
    {
        adicional += (contribuicoes - 80) * 0.25;
    }

    return salario_base + adicional;
}

int main()
{
    struct funcionario
    {
        float salario;
        int index;
        int contribuicaoFuncionario;
    } funcionarios[100000];

    int count = 0;
    while (1)
    {
        printf("Coloque o numero de contribuicoes do funcionario [%i]: ", count);
        scanf("%i", &funcionarios[count].contribuicaoFuncionario);

        funcionarios[count].salario = calculaSalario(funcionarios[count].contribuicaoFuncionario);
        funcionarios[count].index = count;

        printf("Deseja adicionar mais um usuario? [1 para adiconar / 0 para sair] ");
        int confirmacao;
        scanf("%i", &confirmacao);

        if (confirmacao == 1)
        {
            count++;
        }
        else
        {
            break;
        }
    }

    printf("\nResultados finais: \n");
    for (int i = 0; i <= count; i++) {
        printf("Funcionario: %i\n", funcionarios[i].index);
        printf("Numero de contribuicoes: %i\n", funcionarios[i].contribuicaoFuncionario);
        printf("Salario: R$ %.2f\n", funcionarios[i].salario);
        printf("-------------\n");
    }

    return 0;
}