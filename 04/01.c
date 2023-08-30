#include <stdio.h>
#include<math.h>
int main()
{

    // Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo.


    double numero, resultado;

    printf("Insira um numero: ");
    scanf("%lf", &numero);

    if (numero >= 0)
    {
        resultado = sqrt(numero);
        printf("A raiz desse numero e: %.2lf", resultado );
    } else {
        resultado = numero * numero;
        printf("O resultado e: %.2lf", resultado );
    }


    

    return 0;
}