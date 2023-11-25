#include <stdio.h>
#include <string.h>
 
// struct area
struct viewer
{
    char opinion;
    int age;
};
 
// main function
int main()
{
 
    // variable declaration
    int total_viewers = 10;
    struct viewer spectators[total_viewers];
    int amount_otimo = 0, amount_bom = 0, amount_regular = 0, amount_ruim = 0;
    double amount_pessimo = 0;
    int older_age_pessimo, older_age_otimo, older_age_ruim, age_difference_otimo_ruim;
    float percentage_difference_bom_regular = 0, average_age_ruim = 0, average_age_pessimo = 0;
 
    // data entry
    for (int i = 0; i < total_viewers; i++)
    {
        printf("\nExpectador %d: \n", i);
        printf("Idade: ");
        scanf("%i", &spectators[i].age);
        fflush(stdin);

        printf("\nA - Pessimo. \nB - Ruim. \nC - Regular. \nD - Bom. \nE - Otimo.");
        printf("\nEscolha sua nota: ");
        scanf("%s", &spectators[i].opinion);
        fflush(stdin);

        // input
        if (spectators[i].opinion == 'A')
            amount_otimo++;
        if (spectators[i].age > older_age_otimo)
        {
            older_age_otimo = spectators[i].age;
        }
        else if (spectators[i].opinion == 'B')
            amount_bom++;
        else if (spectators[i].opinion == 'C')
            amount_regular++;
        else if (spectators[i].opinion == 'D')
            amount_ruim++;
        if (spectators[i].age > older_age_ruim)
        {
            older_age_ruim = spectators[i].age;
        }
        else if (spectators[i].opinion == 'E')
            amount_pessimo++;
        if (spectators[i].age > older_age_pessimo)
        {
            older_age_pessimo = spectators[i].age;
        }
    }
 
    // data computing
 
    // percentage difference bom & regular
    percentage_difference_bom_regular = (float)((amount_regular - amount_bom) / amount_bom) * 100;
 
    // average age ruim
    for (int i = 0; i < total_viewers; i++)
        if (spectators[i].opinion == 'D')
            average_age_ruim += spectators[i].opinion;
    average_age_ruim /= (float)amount_ruim;
 
    // average age pessimo
    for (int i = 0; i < total_viewers; i++)
        if (spectators[i].opinion == 'E')
            average_age_pessimo += spectators[i].opinion;
    average_age_pessimo /= (float)amount_pessimo;
 
    //percentage difference older otimo & older ruim
    age_difference_otimo_ruim = (float)(older_age_otimo - older_age_ruim);
 
    // data output
    printf("A quantidade total de respostas otimo foi: %i", amount_otimo);
    printf("\nA diferenca percentual entre respostas bom e regular foi de: %.2f%%", percentage_difference_bom_regular);
    printf("\nA media de idade das pessoas que responderam ruim foi de: %.2f", average_age_ruim);
    printf("\nA percentagem de respostas pessimo e a maior idade que utilizou esta opcao: %.2f%% e %i", amount_pessimo, older_age_pessimo);
    printf("\nA diferenca de idade entre a maior idade que respondeu otimo e a maior idade que respondeu ruim: %i", age_difference_otimo_ruim);
}
