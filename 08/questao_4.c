#include <stdio.h>

int main() {
    // variable declaration
    int num, i;

    // data entry
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    // input
    printf("Os divisores de %d sao: ", num);
    for (i = 1; i <= num; i++) {
        // data output
        if (num % i == 0) {
            printf("%d", i);
            if (i != num) {
                printf(", ");
            }
        }
    }
    printf("\n");

    return 0;
}
