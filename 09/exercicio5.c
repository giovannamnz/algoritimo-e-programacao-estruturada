#include <stdio.h>

int main() {
    // declaration of vectors
    int numbers[10];
    int evenNumbers = 0;
 
    // reading numbers
    printf("Digite 10 numeros inteiros:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    //computing 
    
    // counting even numbers
    for(int i = 0; i < 10; i++) {
        if(numbers[i] % 2 == 0) {
            evenNumbers++;
        }
    }

    // printing of even numbers
    printf("\nO vetor possui %d valores pares.\n", evenNumbers);

    return 0;
}
