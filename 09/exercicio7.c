#include <stdio.h>

int main() {

    // declaration of vectors
    int vector[10];
    int higherNum = 0;
    int position = 0;
    
    // reading numbers
    printf("Digite 10 numeros inteiros:\n");

    //computing

    //finding the largest number
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vector[i]);
        if(i == 0 || vector[i] > higherNum) {
            higherNum = vector[i];
            position = i;
        }
    }

    //printing the vectors
    printf("\nvector:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vector[i]);
    }

    //printing the larger number
    printf("\n\nMaior elemento: %d\n", higherNum);
    printf("posicao: %d\n", position+1);

    return 0;
}
