#include <stdio.h>

int main()
{

    int n;

    printf("Digite um numero maior que 0: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d; ", i);
    }

    return 0;
}
