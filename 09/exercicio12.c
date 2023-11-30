#include <stdio.h>

int main() {

    //declaration of vectors
    int values[5];
    int higher, lowest;
    float average = 0;

    //reading numbers
    printf("Digite 5 numeros:\n");

    // finding the highest, lowest and average of numbers
    for(int i = 0; i < 5; i++) {
        scanf("%d", &values[i]);
        average += values[i];
        if(i == 0) {
            higher = values[i];
            lowest = values[i];
        } else {
            if(values[i] > higher) {
                higher = values[i];
            }
            if(values[i] < lowest) {
                lowest = values[i];
            }
        }
    }

    //calculating the average
    average /= 5;

    //printing the values
    printf("\nMaior valor: %d\n", higher);
    printf("Menor valor: %d\n", lowest);
    printf("Media dos valores: %.2f\n", average);

    return 0;
}
