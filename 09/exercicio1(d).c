#include <stdio.h>

int main() 
{
    //declaration of values for the vector
    int vector[6] = {1, 0, 5, -2, -5, 7};
    int i;
    
    //computing

    //presentation of vector values in list
    for (i = 0; i < 6; i++)
    {
        //printing vector values
        printf("\nVetor [%d]: %i\n", i, vector[i]);
    }

    return 0;
}