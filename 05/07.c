#include <stdio.h>

int main()
{

    // Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou  superior a 7.0 pontos.

    float nota1, nota2, nota3, mediaPonderada;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    mediaPonderada = (nota1 + nota2 + (nota3 * 2)) / 4;

    printf("\n\nMedia do aluno: %.2f", mediaPonderada);

    if (mediaPonderada >= 7)
    {
        printf("\n---------------------------------------------");
        printf("\nAprovado");
        printf("\n---------------------------------------------");
    }
    else
    {
        printf("\n---------------------------------------------");
        printf("\nReprovado");
        printf("\n---------------------------------------------");
    }
}