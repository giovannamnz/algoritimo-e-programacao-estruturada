#include<stdio.h>

int main(){

    //variaveis que armazenam texxto
    char nome[50] = "Pedro Paulo Pedrosa";
    char endereco[30];
    char pais[30];

    printf("O nome e: %s", nome);

    //recebendo dados com scanf
    printf("\nDigite o endereco: \n");
    scanf("%s", endereco);
    scanf("%[^\n]", endereco);  /*ler espaço*/
    fflush(stdin);
    printf("O endereco e: %s", endereco);

    //recebendo dados com fgets
    printf("\nDigite nome do pais:");
    fgets(pais, 40, stdin);
    printf("\nO pais e: %s", pais);

    return 0;
    
    }