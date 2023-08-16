#include <stdio.h>
#include <math.h> //função importada

main()
{

    // potencia e modulo

    int num1, num2, potencia, modulo;

    printf("Digite dois numeros inteiros \n");
    scanf("%d %d", &num1, &num2);

    // potencia
    potencia = (num1 ^ num2);
    /*potencia = pow(num1, num2);*/ /*é esse*/

    printf("Resultado potencia: %d", potencia);

    // modulo

    modulo = num1 % num2;

    printf("\n Resultado modulo: %d", modulo);
}
