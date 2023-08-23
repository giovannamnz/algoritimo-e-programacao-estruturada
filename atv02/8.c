#include<stdio.h>

int main (){
    
    //Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.

    int idadeP;
    float idadeDias;
    float idadeMeses;
    float idadeAnos;

    //calculos
    
    printf("Digite sua idade em ano, meses e dias: ");
    scanf("%d %d %d", &idadeAnos, idadeMeses, idadeDias);
    
    idadeDias = (idadeAnos * 365) + (idadeMeses * 30) + (idadeDias);

    printf("\nDias vividos: %f", idadeDias);





    return 0;
}