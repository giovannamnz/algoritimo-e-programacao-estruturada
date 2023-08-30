#include<stdio.h>

int main(){

    //Leia a altura e imprima se é maior que 1.8m;

    float altura;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if (altura > 1.8){
        printf("Altura acima de 1.8");
    }else{
        printf("Altura abaixo de 1.8");
    }

    return 0;
}