#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// transformar texto em italico
void italic(int status)
{
    static const char *seq[] = {"\x1b[0m", "\x1b[3m"};
    printf("%s", seq[!!status]);
}

// transformar texto em negrito
void bold(int status)
{
    static const char *seq[] = {"\x1b[0m", "\x1b[1m"};
    printf("%s", seq[!!status]);
}

// estrutura para representar um carro
struct Carro {
    char dono[50];
    char combustivel[10];
    char modelo[50];
    char cor[20];
    char num_chassis[20];
    char placa[10];
    char ano[10]; 
    struct Carro* proximo;
};

// função para criar uma lista vazia
struct Carro* criar_lista() {
    return NULL;
}

// função para adicionar um carro à lista
struct Carro* addCarro(struct Carro* head, char dono[], char combustivel[], char modelo[], char cor[], char num_chassis[], char placa[], char ano[]) {
    struct Carro* newCarro = (struct Carro*)malloc(sizeof(struct Carro));
    strcpy(newCarro->dono, dono);
    strcpy(newCarro->combustivel, combustivel);
    strcpy(newCarro->modelo, modelo);
    strcpy(newCarro->cor, cor);
    strcpy(newCarro->num_chassis, num_chassis);
    strcpy(newCarro->placa, placa);
    strcpy(newCarro->ano, ano);
    newCarro->proximo = head;
    return newCarro;
}

// função para listar os donos cujos Carros são do ano 2010 ou posterior e rodam a diesel
void listadonos(struct Carro* head) {
    printf("Donos cujos carros sao do ano 2010 ou posterior e funcionam a disel:\n\n");
    while (head != NULL) {
        if (atoi(head->ano) >= 2010 && strcmp(head->combustivel, "diesel") == 0) {
            printf("%s\n", head->dono);
        }
        head = head->proximo;
    }
}

// função para listar placas que iniciam com a letra J e terminam com 0, 2, 4 ou 7 e seus respectivos donos
void lista_placas(struct Carro* head) {
    printf("Placas que iniciam com a letra J e terminam com 0, 2, 4 ou 7 e seus respectivos donos:\n");
    while (head != NULL) {
        if (head->placa[0] == 'J' && (head->placa[strlen(head->placa) - 1] == '0' || head->placa[strlen(head->placa) - 1] == '2' || head->placa[strlen(head->placa) - 1] == '4' || head->placa[strlen(head->placa) - 1] == '7')) {
            printf("%s - %s\n", head->placa, head->dono);
        }
        head = head->proximo;
    }
}

// função para listar modelo e cor de veículos cujas placas possuem uma vogal como segunda letra e cujos valores numéricos somam um número par
void lista_modelo_cor(struct Carro* head) {
    printf("modelo e cor dos veiculos cujas placas tenham vogal como segunda letra e cujos valores numericos somam um numero par:\n");
    while (head != NULL) {
        if (strchr("aeiouAEIOU", head->placa[1]) && (head->placa[3] + head->placa[4] + head->placa[5] + head->placa[6]) % 2 == 0) {
            printf("%s - %s\n", head->modelo, head->cor);
        }
        head = head->proximo;
    }
}

// função para alterar dono fornecendo o número do chassi de Carros com placas que não possuem dígito igual a zero
void mudardono(struct Carro* head, char num_chassis[], char novo_dono[]) {
    while (head != NULL) {
        if (!strchr(head->placa, '0') && strcmp(head->num_chassis, num_chassis) == 0) {
            strcpy(head->dono, novo_dono);
            bold(1);
            italic(1);
            printf("Dono alterado com sucesso!\n");
            bold(0);
            italic(0);
            return;
        }
        head = head->proximo;
    }
    bold(1);
    italic(1);
    printf("Nao foi encontrado nenhum carro com o numero de chassi fornecido ou o carro possui digitos iguais a zero em sua placa de licenca.\n");
    bold(0);
    italic(0);
}

// função para imprimir o menu e obter a escolha do usuário
char menu() {
    char escolha;
    bold(1);
    italic(1);
    printf("\nLevantamento de veiculos da Secretaria dos Transportes\n");
    bold(0);
    italic(0);
    printf("\na. Adicionar carro\n");
    printf("b. Lista de veiculos a diesel que são do ano 2010 ou posterior: \n");
    printf("c. Lista de placas que comecam com a letra J e terminam com 0, 2, 4 ou 7 e seus respectivos donos\n");
    printf("d. Lista por cor e modelo de veiculos cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numéricos fornece um número par\n");
    printf("e. Altere o dono informando o numero do chassi dos Carros com placas que nao possuem digitos iguais a zero\n");
    printf("x. Finalizar\n\n");
    printf("Digite a letra corresponde a sua escolha: ");
    scanf(" %c", &escolha);
    return escolha;
}

int main() {
    struct Carro* lista_carro = criar_lista();
    char dono[50], combustivel[10], modelo[50], cor[20], num_chassis[20], placa[10], ano[10];
    char novo_dono[50], num_chassis_mudar[20];
    char escolha;

    do {
        escolha = menu();

        switch (escolha) {
            case 'a':
                printf("\nDados do Carro\n");
                printf("Proprietario: ");
                fflush(stdin);
                scanf("%s", dono);
                printf("Informe o tipo de combustivel (diesel, gasolina, alcool): ");
                fflush(stdin);
                scanf("%s", combustivel);
                printf("Modelo: ");
                fflush(stdin);
                scanf("%s", modelo);
                printf("Cor: ");
                fflush(stdin);
                scanf("%s", cor);
                printf("Numero do chassi: ");
                fflush(stdin);
                scanf("%s", num_chassis);
                printf("Placa: ");
                fflush(stdin);
                scanf("%s", placa);
                printf("Ano: ");
                fflush(stdin);
                scanf("%s", ano);
                lista_carro = addCarro(lista_carro, dono, combustivel, modelo, cor, num_chassis, placa, ano);
                bold(1);
                italic(1);
                printf("Carro adicionado com sucesso!\n");
                bold(0);
                italic(0);
                break;
            case 'b':
                listadonos(lista_carro);
                break;
            case 'c':
                lista_placas(lista_carro);
                break;
            case 'd':
                lista_modelo_cor(lista_carro);
                break;
            case 'e':
                printf("Digite o numero do chassi do carro: ");
                scanf("%s", num_chassis_mudar);
                printf("Digite o nome do novo dono: ");
                scanf("%s", novo_dono);
                mudardono(lista_carro, num_chassis_mudar, novo_dono);
                break;
            case 'x':
                bold(1);
                italic(1);
                printf("Saindo do programa...\n");
                break;
                bold(0);
                italic(0);
            default:
                bold(1);
                italic(1);
                printf("Escolha invalida! Por favor, tente novamente.\n");
                bold(0);
                italic(0);
        }

    } while (escolha != 'x');

    return 0;
}
