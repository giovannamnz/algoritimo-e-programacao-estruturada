#include <stdio.h>

int main()
{

    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("\nDigite o valor de b: ");
    scanf("%d", &b);

    printf("\nDigite o valor de c: ");
    scanf("%d", &c);

    if ((a + b) >= c && (a + c) >= b && (b + c) >= a)
    {
        printf("Ha possibilidade de formar um triangulo!");

        if (a == b && b == c && c == a)
        {
            printf("\nTipo de triangulo: Equilatero.");
        }

        else if (a != b && b != c && c != a)
        {
            printf("\nTipo de triangulo: Escaleno.");
        }

        else if (a == b || b == c || c == a)
        {
            printf("\nTipo de triangulo: Isosceles.");
        }
    }
    else
        printf("\n{!} Nao ha possibilidade de formar um triangulo.");

    return 0;
}