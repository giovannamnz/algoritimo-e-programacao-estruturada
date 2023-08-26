#include <stdio.h>

/*
aprovado = >=7
recuperação =  4 < x < 6.9
reprovado x < 4
*/

int main()
{

    float media;
    float frequencia;

    printf("Digite sua nota: ");
    scanf("%f", &media);

    printf("Digite sua frequencia: ");
    scanf("%f", &frequencia);

    if ((media >= 7) && (frequencia >= 75))
    {
        printf("Aprovado");
    }else if(media >=7 && frequencia < 75){
        printf("Reprovado por falta");
        }else if((media >= 4 && media < 7) && (frequencia > 75)) {
            printf("Recuperação");
            }else if ((media >= 4 && media < 7) && frequencia < 75){
                printf("Reprovado por nota");
            }else if (media < 4){
                printf("Reprovado");
            }


            return 0;

}