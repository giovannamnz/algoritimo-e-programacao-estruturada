#include <stdio.h>

int main()
{

    // declaration of vectors
    int vector[8], vectorX, vectorY, i, sum;

    // reading real numbers
    for (i = 0; i < 8; i++)
    {
        printf("Digite um numero: ", i + 1);
        scanf("%d", &vector[i]);
        fflush(stdin);
    }

    // printing the entered values
    for (i = 0; i < 8; i++)
    {
        printf("Vetor [%d]: %i; ", i, vector[i]);
    }

    // reading the value of X
    printf("\n\nDigite o valor de X: ");
    scanf("%d", &vectorX);

    // reading the value of Y
    printf("\nDigite o valor de Y: ");
    scanf("%d", &vectorY);

    // sum of vectors X and Y
    sum = vectorX + vectorY;

    // printing the result of the sum between x and y
    printf("\nA soma entre X e Y e: %d", sum);

    return 0;
}