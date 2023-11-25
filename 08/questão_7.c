#include <stdio.h>

//struct area
typedef struct {
    char name[50];
    char sex;
    float height;
    float weight;
} Person;

// variable declaration
int main() {
    Person people[10];
    int num_men = 0, num_women = 0;
    float soma_height_men = 0, soma_height_women = 0;
    float soma_weight_men = 0, soma_weight_women = 0;
    int i;

//data entry
    for (i = 0; i < 10; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", people[i].name);
        printf("Sexo (M/F): ");
        scanf(" %c", &people[i].sex);
        printf("Altura (em metros): ");
        scanf("%f", &people[i].height);
        printf("Peso (em kg): ");
        scanf("%f", &people[i].weight);

        // input
        if (people[i].sex == 'M' || people[i].sex == 'm') {
            num_men++;
            soma_height_men += people[i].height;
            soma_weight_men += people[i].weight;
        } else if (people[i].sex == 'F' || people[i].sex == 'f') {
            num_women++;
            soma_height_women += people[i].height;
            soma_weight_women += people[i].weight;
        }
    }

    //computing

    //average height men
    float height_average_men = soma_height_men / num_men;
    
    //average height women
    float height_average_women = soma_height_women / num_women;

    //group average height
    float height_average_grupo = (soma_height_men + soma_height_women) / 10;

    //group medium weight
    float weight_average_men = soma_weight_men / num_men;
    float weight_average_women = soma_weight_women / num_women;

    //group medium weight
    float weight_average_grupo = (soma_weight_men + soma_weight_women) / 10;

    printf("\nRelatorio:\n");
    printf("Numero de homens: %d\n", num_men);
    printf("Numero de mulheres: %d\n", num_women);
    printf("Altura media dos homens: %.2f metros\n", height_average_men);
    printf("Altura media das mulheres: %.2f metros\n", height_average_women);
    printf("Altura media do grupo: %.2f metros\n", height_average_grupo);
    printf("Peso medio dos homens: %.2f kg\n", weight_average_men);
    printf("Peso medio das mulheres: %.2f kg\n", weight_average_women);
    printf("Peso medio do grupo: %.2f kg\n", weight_average_grupo);

    return 0;
}
