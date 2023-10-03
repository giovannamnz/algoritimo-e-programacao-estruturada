#include <stdio.h>

int main()
{

    double a, b, c;

    printf("Digite o valor do primeiro angulo : ");
    scanf("%lf", &a);

    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    printf("Digite o valor de c: ");
    scanf("%lf", &c);

    if (a + b + c == 180)
    { // possui um ângulo reto, isto é, um dos seus ângulos mede noventa graus
        if (a == 90 || b == 90 || c == 90)
        {
            printf("E um triangulo retangulo");
        }
        else if (a > 90 || b > 90 || c > 90)
        { // quando um de seus ângulos é obtuso, ou seja, maior que 90º
            printf("E um triangulo obtusangulo");
        }
        else if (a < 90 && b < 90 && c < 90)
        { // possui todos os seus ângulos internos menores que 90°
            printf("E um triangulo acutangulo");
        }
    }

    else
    {
        printf("Nao pode formar um triangulo");
    }

    return 0;
}