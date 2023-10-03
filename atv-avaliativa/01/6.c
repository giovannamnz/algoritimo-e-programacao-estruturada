#include <stdio.h>

int main()
{

    double x, y;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    printf("Digite o valor de y: ");
    scanf("%lf", &y);

    if (x == 0 && y == 0)
    {
        printf("O ponto esta situado na Origem");
    }
    else if (x > 0 && y >= 0)
    {
        printf("O ponto esta situado no quadrante 1");
    }
    else if (x <= 0 && y > 0)
    {
        printf("O ponto esta situado no quadrante 2");
    }
    else if (x < 0 && y <= 0)
    {
        printf("O ponto esta situado no quadrante 3");
    }
    else if (x > 0 && y <= 0)
    {
        printf("O ponto esta situado no quadrante 4");
    }

    return 0;
}