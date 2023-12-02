#include <stdio.h>

#define MAX 100

int main() {
    int v[MAX];
    int i = 0, x = 0;

    while (i < MAX) {
        if (!((x % 7 == 0) || (x % 10 == 7))) {
            v[i] = x;
            i++;
        }
        x++;
    }

    printf("v = { ");
    for (int i = 0; i < MAX; i++) {
        printf("%i", v[i]);
        if (i != MAX - 1)
            printf(", ");
        else
            printf(" }\n");
    }

    return 0;
}
