#include <stdio.h>

int main() {

    //declaration of vectors
    float grades[15];
    float sum = 0;
    float average;

    //data entry

    //reading numbers
    printf("Digite as notas dos 15 alunos:\n");
    for(int i = 0; i < 15; i++) {
        scanf("%f", &grades[i]);
        sum += grades[i];
    }

    //computing

    //calculating the average
    average = sum / 15;

    //printing the students' average
    printf("\nMedia geral: %.2f\n", average);

    return 0;
}
