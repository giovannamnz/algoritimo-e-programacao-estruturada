#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char descricao[100];
    int quantidade;
    float valor;
} Produto;

typedef struct Node {
    Produto Produto;
    struct Node* proximo;
} Node;

typedef struct {
    Node* head;
} Estoque;

void initialize(Estoque* Estoque) {
    Estoque->head = NULL;
}

void addProduto(Estoque* Estoque) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    printf("Digite o codigo do produto: ");
    scanf("%d", &(newNode->Produto.codigo));
    printf("Digite a descrição do produto ");
    scanf(" %[^\n]", newNode->Produto.descricao);
    printf("Digite a quantidade de produto: ");
    scanf("%d", &(newNode->Produto.quantidade));
    printf("Digite o valor do produto: ");
    scanf("%f", &(newNode->Produto.valor));
    newNode->proximo = NULL;

    if (Estoque->head == NULL) {
        Estoque->head = newNode;
    } else {
        Node* atual = Estoque->head;
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = newNode;
    }

    printf("Produto adicionado com sucesso!\n");
}

void generateReport(Estoque* Estoque) {
    Node* atual = Estoque->head;
    printf("Relatório de produto:\n");
    while (atual != NULL) {
        printf("Codigo: %d\n", atual->Produto.codigo);
        printf("Descricao: %s\n", atual->Produto.descricao);
        printf("Quantidade: %d\n", atual->Produto.quantidade);
        printf("Valor: %.2f\n", atual->Produto.valor);
        printf("------------------------\n");
        atual = atual->proximo;
    }
}

void pesquisarProduto(Estoque* Estoque) {
    int codigo;
    printf("Digite o codigo do produto para pesquisar: ");
    scanf("%d", &codigo);

    Node* atual = Estoque->head;
    while (atual != NULL) {
        if (atual->Produto.codigo == codigo) {
            printf("Produto found!\n");
            printf("codigo: %d\n", atual->Produto.codigo);
            printf("descricao: %s\n", atual->Produto.descricao);
            printf("quantidade: %d\n", atual->Produto.quantidade);
            printf("valor: %.2f\n", atual->Produto.valor);
            return;
        }
        atual = atual->proximo;
    }
    printf("Produto nao encontrado!\n");
}

void removeProduto(Estoque* Estoque) {
    int codigo;
    printf("Digite o codigo do produto para remove-lo: ");
    scanf("%d", &codigo);

    Node* atual = Estoque->head;
    Node* previous = NULL;
    while (atual != NULL) {
        if (atual->Produto.codigo == codigo) {
            if (previous == NULL) {
                Estoque->head = atual->proximo;
            } else {
                previous->proximo = atual->proximo;
            }
            free(atual);
            printf("Produto removido com sucesso!\n");
            return;
        }
        previous = atual;
        atual = atual->proximo;
    }
    printf("Produto nao registrado!\n");
}

void displayMenu() {
    printf("\n--- Sistema de controle de estoque ---\n");
    printf("1. Adicionar produto\n");
    printf("2. Gerar relatorio de produto\n");
    printf("3. Pesquisar produto\n");
    printf("4. Remover Produto\n");
    printf("5. Sair\n");
    printf("Digite a opcao desejada: ");
}

int main() {
    Estoque Estoque;
    initialize(&Estoque);

    int choice;
    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addProduto(&Estoque);
                break;
            case 2:
                generateReport(&Estoque);
                break;
            case 3:
                pesquisarProduto(&Estoque);
                break;
            case 4:
                removeProduto(&Estoque);
                break;
            case 5:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Escolha invalida! Tente novamente.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}
