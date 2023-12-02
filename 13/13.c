#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MaX_USERS 1000
#define MaX_NaME 50
#define MaX_EMaIL 50

struct Usuario {
    int id;
    char nome[MaX_NaME];
    char email[MaX_EMaIL];
    char sexo[MaX_NaME];
    char endereco[MaX_NaME];
    double altura;
    int vacina;
};

struct Usuario usuarios[MaX_USERS];
int totalUsuarios = 0;

void incluirUsuario() {
    if (totalUsuarios >= MaX_USERS) {
        printf("Limite maximo de usuarios atingido.\n");
        return;
    }

    struct Usuario novoUsuario;
    novoUsuario.id = rand() % 10000; //generate random ID
    printf("Nome completo: ");
    scanf("%s", novoUsuario.nome);
    printf("Email: ");
    scanf("%s", novoUsuario.email);
    printf("Sexo (Feminino/Masculino/Indiferente): ");
    scanf("%s", novoUsuario.sexo);
    printf("Endereço: ");
    scanf("%s", novoUsuario.endereco);
    printf("altura (entre 1 e 2 metros): ");
    scanf("%lf", &novoUsuario.altura);
    printf("Vacina (1 para sim, 0 para não): ");
    scanf("%d", &novoUsuario.vacina);

    usuarios[totalUsuarios++] = novoUsuario;
    printf("Usuario cadastrado com sucesso!\n");
}

void imprimirUsuarios() {
    printf("Lista de usuarios cadastrados:\n");
    for (int i = 0; i < totalUsuarios; i++) {
        printf("ID: %d | Nome: %s | Email: %s\n", usuarios[i].id, usuarios[i].nome, usuarios[i].email);
    }
}

//implement other functions (edit, delete, search by email) as necessary

int main() {
    srand(time(NULL)); //initialize the random number generator

    char opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Incluir usuario\n");
        printf("2. Imprimir usuarios cadastrados\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1':
                incluirUsuario();
                break;
            case '2':
                imprimirUsuarios();
                break;
            case '3':
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != '3');

    return 0;
}
