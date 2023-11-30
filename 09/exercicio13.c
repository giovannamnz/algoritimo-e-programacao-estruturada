#include <stdio.h>

int main() {

    //declaration of vectors
    int values[5];
    int highest, lowest, posHighest, posLowest;

    //reading numbers 
    printf("Digite 5 numeros: \n");
    
    
    for(int i = 0; i < 5; i++) {
        scanf("%d", &values[i]);
        if(i == 0) {
            highest = values[i];
            lowest = values[i];
            posHighest = i;
            posLowest = i;
        } else {
            if(values[i] > highest) {
                highest = values[i];
                posHighest = i;
            }
            if(values[i] < lowest) {
                lowest = values[i];
                posLowest = i;
            }
        }
    }

    printf("\nMaior numero: %d, na posição: %d\n", highest, posHighest);
    printf("Menor numero: %d, na posição: %d\n", lowest, posLowest);

    return 0;
}
