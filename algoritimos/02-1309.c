#include <stdio.h>

int main()
{

    int n = 2, num = 0;
    int contador;
    int res;

    while (num <= 10)
    {
        printf("%d", num);
        num++;
    }

    printf("\n__________________________");

    while (contador <= 10)
    {
        res = n * contador;
        printf("%d * %d = %d", num, contador, res);
        contador++;
    }
}
