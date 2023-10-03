#include <stdio.h>

int main()
{

    double Chico = 1.5, Ze = 1.1;
    float Ano = 0;

    for (Chico; Chico > Ze; Chico += 0.02)
    {
        Ze += 0.03;
        Ano++;
        printf("\nAltura de Chico: %.2f | Altura de Ze %.2f  \nAno: %.1f", Chico, Ze, Ano);
    }

    printf("\n____________________________________________________");
    printf("\nEm %.1f anos a idade de Ze sera maior que a de Chico", Ano);

    return 0;
}