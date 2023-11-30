#include <stdio.h>

int main()
{ 
    //declaration of variables
    int vector[6];
    int i;

    //computing
    for (i = 0; i < 6; i++)
    {
        //data input    
        printf("Digite um numero: ", i + 1);
        scanf("%d", &vector[i]);
    }

    for (i = 0; i < 6; i++)
    {
        //printing vector values
        printf("\nVetor [%d]: %i\n", i, vector[i]);
    }

    return 0;
}