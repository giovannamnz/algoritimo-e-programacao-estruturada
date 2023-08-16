#include<stdio.h>

main(){

    //subtração, divisão e multiplicação 
    //% módulo
    //** potência

    int num1, num2, sub, mult, div;

    printf("Digite dois numeros inteiros \n");
    scanf("%d %d", &num1, &num2);

    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2; //casting

    
    printf("\nResultado subtracao: %d ", sub);
    printf("\nResultado multiplicacao: %d ", mult);
    printf("\nResultado divisao: %.2f ", div);

}