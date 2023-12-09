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

// estrutura para apresentar o carro
struct Carro
{
    char dono[50];
    char modelo[70];
    char cor[20];
    char num_chassis[20];
    char placa[10];
    char ano[5];
    struct Carro *proximo;
};

// função para criar lista vazia
struct Carro *criarLista()
{
    return NULL;
};

// função para adicionar um carro a lista
struct Carro *addCarro(struct Carro *head, char dono[], char modelo[], char cor[], char num_chassis[], char placa[], char ano[])
{
    struct Carro *novo_carro = (struct Carro *)malloc(sizeof(struct Carro));
    strcpy(novo_carro->dono, dono);
    strcpy(novo_carro->modelo, modelo);
    strcpy(novo_carro->cor, cor);
    strcpy(novo_carro->num_chassis, num_chassis);
    strcpy(novo_carro->placa, placa);
    strcpy(novo_carro->ano, ano);
    novo_carro->proximo = head;
    return novo_carro;
}

// função para alterar dono fornecendo o número do chassi de carros com placas que não possuem dígito igual a zero
void mudardono(struct Carro *head, char num_chassis[], char novo_dono[])
{
    while (head != NULL)
    {
        if (!strchr(head->placa, '0') && strcmp(head->num_chassis, num_chassis) == 0)
        {
            strcpy(head->dono, novo_dono);
            printf("Mudanca de dono completa com sucesso!\n");
            return;
        }
        head = head->proximo;
    }
    printf("Nao foi encontrado nenhum carro com o numero de chassi fornecido ou o carro possui digitos iguais a zero em sua placa de licenca.\n");
}

// menu

char opcoes_menu()
{
    char escolher;
    bold(1);
    printf("\nBem vindo ao Luxury Cars");
    bold(0);
    italic(1);
    printf("\nSua autorizada certificada\n\n");
    italic(0);
    printf("a. Adicionar novo carro\n");
    printf("b. Vizualizar lista de carros disponiveis\n");
    printf("c. Mudar o dono atraves do numero do chassis\n");
    printf("x. Sair do programa\n\n");
    printf("Entre com sua escolha: ");
    scanf(" %c", &escolher);
    return escolher;
}

// função principal
int main()
{
     
    // declaração das variaveis
    struct Carro *Lista_carros = criarLista();
    char dono[50], modelo[70], cor[20], num_chassis[20], placa[10], ano[10];
    char novo_dono[50], mudar_num_chassis[20];
    char escolher;

    do
    {   
        // declaração da variavel
        escolher = opcoes_menu();

        switch (escolher)
        {

        // inicialização    
        case 'a':
            printf("Lista de carros disponiveis: \n");
            printf("\n01. bmw \n02. mercedes \n03. koenigsegg \n04. ferrari \n05. nissan \n06. pagani \n07. aston martin \n08. mclaren \n09. cadillac \n10. audi \n11. bentley \n12. lamborghini\n\n");
            printf("\nDados do Carro\n");
            printf("Proprietario: ");
            fflush(stdin);
            scanf("%s", dono);
            printf("Modelo do veiculo: ");
            fflush(stdin);
            scanf("%s", modelo);
            printf("Cor do veiculo: ");
            fflush(stdin);
            scanf("%s", cor);
            printf("Numero do chassis: ");
            fflush(stdin);
            scanf("%s", num_chassis);
            printf("Placa do veiculo: ");
            fflush(stdin);
            scanf("%s", placa);
            printf("Ano de fabricacao: ");
            fflush(stdin);
            scanf("%s", ano);
            Lista_carros = criarLista(Lista_carros, dono, cor, num_chassis, placa, ano);
            bold(1);
            italic(1);
            printf("\n\nCarro adicionado com sucesso!\n");
            italic(0);
            bold(0);
            break;

        case 'b':
            printf("Lista de carros disponiveis: \n");
            printf("\n01. bmw \n02. mercedes \n03. koenigsegg \n04. ferrari \n05. nissan \n06. pagani \n07. aston martin \n08. mclaren \n09. cadillac \n10. audi \n11. bentley \n12. lamborghini\n\n");
            break;

        case 'c':
            printf("Digite o numero do chassi do carro: ");
            scanf("%s", mudar_num_chassis);
            printf("Digite o nome do novo dono: ");
            scanf("%s", novo_dono);
            mudardono(Lista_carros, mudar_num_chassis, novo_dono);
            break;

        case 'x':
            printf("Encerrando o programa...\n");
            break;

        default:
            bold(1);
            printf("Escolha invalida! Por favor, tente novamente.\n");
            bold(0);
        }

    } while (escolher != 'x');

    return 0;
}
