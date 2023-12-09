#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// estrutura para representar o carro
struct Carro
{
    char dono[50];
    char modelo [50];
    char cor[20];
    char num_chassis;
    char placa[10];
    char ano[5];
}; 

// função para criar lista vazia
struct Carro *criarLista()
{
    return NULL;
}

// Function to add a Carro to the list
struct Carro* addCarro(struct Carro* head, char dono[], char modelo[], char cor[], char Num_Chassis[], char placa[], char ano[]) {
    struct Carro* newCarro = (struct Carro*)malloc(sizeof(struct Carro));
    strcpy(newCarro->dono, dono);
    strcpy(newCarro->modelo, modelo);
    strcpy(newCarro->cor, cor);
    strcpy(newCarro->Num_Chassis, Num_Chassis);
    strcpy(newCarro->placa, placa);
    strcpy(newCarro->ano, ano);
    return newCarro;
}

// Function to change dono by providing the chassis number for Carros with license placas that do not have any digits equal to zero
void mudardono(struct Carro *head, char Num_Chassis[], char newdono[])
{
    while (head != NULL)
    {
        if (!strchr(head->placa, '0') && strcmp(head->Num_Chassis, Num_Chassis) == 0)
        {
            strcpy(head->dono, newdono);
            printf("dono changed successfully!\n");
            return;
        }
        head = head->proximo;
    }
    printf("No Carro found with the provided chassis number or the Carro has digits equal to zero in its license placa.\n");
}

// Function to print the menu and get user's choice
char getMenuChoice()
{
    char choice;
    printf("\nTHE Carro's\n");
    printf("\na. Add a Carro\n");
    printf("b. Change dono by providing the chassis number for Carros with license placas that do not have any digits equal to zero\n");
    printf("c. list of cars\n");
    printf("x. Exit\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);
    return choice;
}

int main()
{
    struct Carro *CarroList = criarLista();
    char dono[50], carros[50], cor[20], Num_Chassis[20], placa[10], ano[10];
    char newdono[50], Num_ChassisTomudar[20];
    char choice;
    carros[8][20] = {"bmw", "mercedes", "koenigsegg", "ferrari", "nissan", "honda", "toyota", "mclaren"}; 


    do
    {
        choice = getMenuChoice();

        switch (choice)
        {
        case 'a':
            printf("Enter the dono: ");
            fflush(stdin);
            scanf("%s", dono);
            printf("Enter the carros: ");
            fflush(stdin);
            scanf("%s", carros);
            printf("Enter the cor: ");
            fflush(stdin);
            scanf("%s", cor);
            printf("Enter the chassis number: ");
            fflush(stdin);
            scanf("%s", Num_Chassis);
            printf("Enter the placa: ");
            fflush(stdin);
            scanf("%s", placa);
            printf("Enter the ano: ");
            fflush(stdin);
            scanf("%s", ano);
            CarroList = addCarro(CarroList, dono, gasolina, carros, cor, Num_Chassis, placa, ano);
            printf("Carro added successfully!\n");
            break;
        case 'b':
            listdonos(CarroList);
            break;
        case 'c':
            listLicenseplacas(CarroList);
            break;
        case 'd':
            listcarrosAndcor(CarroList);
            break;
        case 'e':
            printf("Enter the chassis number of the Carro: ");
            scanf("%s", Num_ChassisTomudar);
            printf("Enter the new dono: ");
            scanf("%s", newdono);
            mudardono(CarroList, Num_ChassisTomudar, newdono);
            break;
        case 'x':
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 'x');

    return 0;
}
