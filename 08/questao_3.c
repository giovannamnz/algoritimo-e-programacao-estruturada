#include <stdio.h>

int main() {

    // variable declaration
    int a = 0, b = 1, count, i, n;

    // data entry
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("\nSequencia de Fibonacci:\n\n");
    printf("%d\n", a); // Primeiro termo (ordem zero)

    // input
    for (i = 0; i < n; i++) {
        count = a + b;
        a = b;
        b = count;
        // data output
        printf("%d\n", count);
    }

    return 0;
}
