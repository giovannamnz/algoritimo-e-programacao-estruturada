#include <stdio.h>
#include <math.h> 

int main()
{

    float a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a == 0)
    {
        printf("Nao e equacao de 2 grau");
    }
    else
    {
        // realizar os calculos da equação
        delta = pow(b, 2)  - (4 * a * c);
        if (delta < 0)
        {
         printf("Nao existe raiz real");
        }else if ( delta == 0){
            x1 = (-b + sqrt(delta)/(2*a));
            printf("Raiz unica: %.2f", x1); 

        }else{
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("Duas raizes reais: x1 = %.2f, x2 = %.2f", x1, x2); 
        }
    }

    return 0;
}
