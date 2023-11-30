#include <stdio.h>

int main() {
    
    //declaration of vectors
    int numbers[10];
    int highest, lowest;

    //reading numbers
    printf("Digite 10 numeros inteiros:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    //initialization of the highest and lowest number with the first element of the vector
    highest = numbers[0];
    lowest = numbers[0];

    //find the highest and lowest number
    for(int i = 1; i < 10; i++) {
        if(numbers[i] > highest) {
            highest = numbers[i];
        }
        if(numbers[i] < lowest) {
            lowest = numbers[i];
        }
    }

    //print the highest and lowest numbers
    printf("\nO maior numero e %d e o menor numero e %d.\n", highest, lowest);

    return 0;
}
