#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a Carro
struct Carro {
    char dono[50];
    char gasolina[10];
    char modelo[50];
    char cor[20];
    char Num_Chassis[20];
    char placa[10]; // Separate variable for placa
    char ano[10]; // Separate variable for ano
    struct Carro* proximo;
};

// Function to create an empty list
struct Carro* criarLista() {
    return NULL;
}

// Function to add a Carro to the list
struct Carro* addCarro(struct Carro* head, char dono[], char gasolina[], char modelo[], char cor[], char Num_Chassis[], char placa[], char ano[]) {
    struct Carro* newCarro = (struct Carro*)malloc(sizeof(struct Carro));
    strcpy(newCarro->dono, dono);
    strcpy(newCarro->gasolina, gasolina);
    strcpy(newCarro->modelo, modelo);
    strcpy(newCarro->cor, cor);
    strcpy(newCarro->Num_Chassis, Num_Chassis);
    strcpy(newCarro->placa, placa);
    strcpy(newCarro->ano, ano);
    newCarro->proximo = head;
    return newCarro;
}

// Function to list donos whose Carros are from the ano 2010 or later and run on diesel
void listdonos(struct Carro* head) {
    printf("donos whose Carros are from the ano 2010 or later and run on diesel:\n\n");
    while (head != NULL) {
        if (atoi(head->ano) >= 2010 && strcmp(head->gasolina, "diesel") == 0) {
            printf("%s\n", head->dono);
        }
        head = head->proximo;
    }
}

// Function to list license placas that start with the letter J and end with 0, 2, 4, or 7 and their respective donos
void listLicenseplacas(struct Carro* head) {
    printf("License placas that start with the letter J and end with 0, 2, 4, or 7 and their respective donos:\n");
    while (head != NULL) {
        if (head->placa[0] == 'J' && (head->placa[strlen(head->placa) - 1] == '0' || head->placa[strlen(head->placa) - 1] == '2' || head->placa[strlen(head->placa) - 1] == '4' || head->placa[strlen(head->placa) - 1] == '7')) {
            printf("%s - %s\n", head->placa, head->dono);
        }
        head = head->proximo;
    }
}

// Function to list modelo and cor of vehicles whose license placas have a vowel as their second letter and whose numerical values add up to an even number
void listmodeloAndcor(struct Carro* head) {
    printf("modelo and cor of vehicles whose license placas have a vowel as their second letter and whose numerical values add up to an even number:\n");
    while (head != NULL) {
        if (strchr("aeiouAEIOU", head->placa[1]) && (head->placa[3] + head->placa[4] + head->placa[5] + head->placa[6]) % 2 == 0) {
            printf("%s - %s\n", head->modelo, head->cor);
        }
        head = head->proximo;
    }
}

// Function to change dono by providing the chassis number for Carros with license placas that do not have any digits equal to zero
void mudardono(struct Carro* head, char Num_Chassis[], char newdono[]) {
    while (head != NULL) {
        if (!strchr(head->placa, '0') && strcmp(head->Num_Chassis, Num_Chassis) == 0) {
            strcpy(head->dono, newdono);
            printf("dono changed successfully!\n");
            return;
        }
        head = head->proximo;
    }
    printf("No Carro found with the provided chassis number or the Carro has digits equal to zero in its license placa.\n");
}

// Function to print the menu and get user's choice
char getMenuChoice() {
    char choice;
    printf("\nTHE Carro's\n");
    printf("\na. Add a Carro\n");
    printf("b. List donos whose Carros are from the ano 2010 or later and run on diesel\n");
    printf("c. List license placas that start with the letter J and end with 0, 2, 4, or 7 and their respective donos\n");
    printf("d. List modelo and cor of vehicles whose license placas have a vowel as their second letter and whose numerical values add up to an even number\n");
    printf("e. Change dono by providing the chassis number for Carros with license placas that do not have any digits equal to zero\n");
    printf("x. Exit\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);
    return choice;
}

int main() {
    struct Carro* CarroList = criarLista();
    char dono[50], gasolina[10], modelo[50], cor[20], Num_Chassis[20], placa[10], ano[10];
    char newdono[50], Num_ChassisTomudar[20];
    char choice;

    do {
        choice = getMenuChoice();

        switch (choice) {
            case 'a':
                printf("Enter the dono: ");
                fflush(stdin);
                scanf("%s", dono);
                printf("Enter the gasolina type (diesel, gasoline, alcohol): ");
                fflush(stdin);
                scanf("%s", gasolina);
                printf("Enter the modelo: ");
                fflush(stdin);
                scanf("%s", modelo);
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
                CarroList = addCarro(CarroList, dono, gasolina, modelo, cor, Num_Chassis, placa, ano);
                printf("Carro added successfully!\n");
                break;
            case 'b':
                listdonos(CarroList);
                break;
            case 'c':
                listLicenseplacas(CarroList);
                break;
            case 'd':
                listmodeloAndcor(CarroList);
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
