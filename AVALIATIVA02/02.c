#include <stdio.h>

#define SALARIO_MINIMO 1400.00

// defining the structure of the worker
typedef struct {
    char sexo;
    float salario;
} Assalariado;


//salary classification
char* classificaSalario(float salario) {
    if (salario > SALARIO_MINIMO) {
        return "Acima do salario minimo";
    } else if (salario == SALARIO_MINIMO) {
        return "Igual ao salario minimo";
    } else {
        return "Abaixo do salario minimo";
    }
}

//computing
void mostraClassifica(Assalariado assalariado) {
    char* sexo = (assalariado.sexo == 'M') ? "Masculino" : "Feminino";
    printf("Salario: R$ %.2f\n", assalariado.salario);
    printf("Classificacao: %s\n", classificaSalario(assalariado.salario));
    printf("Sexo: %s\n", sexo);
}

//data entry
int main() {
    Assalariado assalariado;
    int total = 0, abaixo = 0, acima = 0;

    while (1) {
        printf("Digite o sexo do assalariado (M/F) ou Q para sair: ");
        scanf(" %c", &assalariado.sexo);
        if (assalariado.sexo == 'Q' || assalariado.sexo == 'q') {
            break;
        }

        do {
            printf("Digite o salario do assalariado: ");
            scanf("%f", &assalariado.salario);
        } while (assalariado.salario <= 1.00);

        mostraClassifica(assalariado);

        total++;
        if (assalariado.salario < SALARIO_MINIMO) {
            abaixo++;
        } else if (assalariado.salario > SALARIO_MINIMO) {
            acima++;
        }
    }

    
    //output
    printf("Total de assalariados: %d\n", total);
    printf("Assalariados com salario abaixo do minimo: %d\n", abaixo);
    printf("Assalariados com salario acima do minimo: %d\n", acima);

    return 0;
}
