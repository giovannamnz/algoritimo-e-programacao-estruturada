#include <stdio.h>
#include <stdlib.h>

// defining the structure of the worker
typedef struct {
    char nome[50];
    int pecas;
    float salario;
} Operario;

// function to validate the quantity of parts
int validaQuantidade(int pecas) {
    if (pecas < 0) {
        printf("Numero de pecas invalido. Deve ser maior ou igual a 0.\n");
        return 0;
    }
    return 1;
}

// function to calculate salary
float calculaSalario(int pecas) {
    float salario = 600.0;
    if (pecas > 50 && pecas <= 80) {
        salario += (pecas - 50) * 0.5;
    } else if (pecas > 80) {
        salario += 30 * 0.5 + (pecas - 80) * 0.75;
    }
    return salario;
}

// function to show the final result
void mostraFinal(Operario operario) {
    printf("O salario do operario %sR$ %.2f\n\n", operario.nome, operario.salario);
}

// defining variables
int main() {
    Operario* operarios = NULL;
    int numOperarios = 0;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        operarios = realloc(operarios, (numOperarios + 1) * sizeof(Operario));

        //data entry
        printf("\nDigite o nome do operario: ");
        fgets(operarios[numOperarios].nome, sizeof(operarios[numOperarios].nome), stdin);

        do {
            printf("Digite o numero de pecas fabricadas: ");
            scanf("%d", &operarios[numOperarios].pecas);
        } while (!validaQuantidade(operarios[numOperarios].pecas));

        //calculating salaries
        operarios[numOperarios].salario = calculaSalario(operarios[numOperarios].pecas);

        mostraFinal(operarios[numOperarios]);

        numOperarios++;

        //printing results
        printf("Deseja adicionar outro operario? (s/n): \n");
        scanf(" %c", &continuar);
        fflush(stdin);
    }

    free(operarios);

    return 0;
}