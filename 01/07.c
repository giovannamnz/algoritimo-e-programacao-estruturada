#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 0; i <= 50; i += 2) {
        sum += i;
    }
    printf("A soma dos primeiros 50 números pares é: %d", sum);
    return 0;
}