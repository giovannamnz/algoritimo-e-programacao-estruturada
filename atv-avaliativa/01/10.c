#include <stdio.h>
#include <string.h>

#define MAX_CIDADES 200

int main() {
    char codigo[MAX_CIDADES][10];
    char estados[MAX_CIDADES][3];
    int num_veiculos[MAX_CIDADES];
    int num_acidentes[MAX_CIDADES];
    int i, num_cidades;

    printf("Digite o numero de cidades: ");
    scanf("%d", &num_cidades);

    for (i = 0; i < num_cidades; i++) {
        printf("Digite o codigo da cidade %d: ", i + 1);
        scanf("%s", codigo[i]);

        printf("Digite o estado da cidade %d: ", i + 1);
        scanf("%s", estados[i]);

        printf("Digite o numero de veiculos de passeio em 1992 na cidade %d: ", i + 1);
        scanf("%d", &num_veiculos[i]);

        printf("Digite o numero de acidentes de trânsito com vitimas em 1992 na cidade %d: ", i + 1);
        scanf("%d", &num_acidentes[i]);
    }

    // a) qual o maior e o menor indice de acidentes de trânsito e a que cidades pertencem
    int max_index = 0, min_index = 0;
    for (i = 1; i < num_cidades; i++) {
        if (num_acidentes[i] > num_acidentes[max_index]) {
            max_index = i;
        }
        if (num_acidentes[i] < num_acidentes[min_index]) {
            min_index = i;
        }
    }
    printf("\nCidade com maior indice de acidentes: %s, %s (%d acidentes)\n", codigo[max_index], estados[max_index], num_acidentes[max_index]);
    printf("Cidade com menor indice de acidentes: %s, %s (%d acidentes)\n", codigo[min_index], estados[min_index], num_acidentes[min_index]);

    // b) qual a media de veiculos nas cidades brasileiras
    int total_veiculos = 0;
    for (i = 0; i < num_cidades; i++) {
        total_veiculos += num_veiculos[i];
    }
    float avg_veiculos = (float) total_veiculos / num_cidades;
    printf("\nMedia de veiculos nas cidades brasileiras: %.2f\n", avg_veiculos);

    // c) qual a media de acidentes com vitimas entre as cidades do Rio Grande do Sul
    int total_acidentes_rs = 0, count_rs = 0;
    for (i = 0; i < num_cidades; i++) {
        if (strcmp(estados[i], "RS") == 0) {
            total_acidentes_rs += num_acidentes[i];
            count_rs++;
        }
    }
    float avg_acidentes_rs = (float) total_acidentes_rs / count_rs;
    printf("\nMedia de acidentes com vitimas entre as cidades do Rio Grande do Sul: %.2f\n", avg_acidentes_rs);

    return 0;
}
