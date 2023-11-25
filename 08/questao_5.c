#include <stdio.h>
#include <stdlib.h>

// define area
#define NUM_PLAYERS 10
#define MIN_INTERVIEWERS 50
#define MAX_INTERVIEWERS 300

//struct area
typedef struct {
    char name[50];
    int age;
    char sex; // 'M' para masculino, 'F' para feminino
    int vote;
} Entrevistado;

//data entry
int main() {
    Entrevistado interviewed[MAX_INTERVIEWERS];
    int votes[NUM_PLAYERS] = {0};
    int num_interviewed = 0;
    int i;

    printf("Bem-vindo(a) a pesquisa sobre as jogadoras da Copa do Mundo de Futebol Feminino!\n");
    printf("Por favor, responda as seguintes perguntas:\n");

    //input
    while (num_interviewed < MAX_INTERVIEWERS) {
        printf("\nEntrevistado %d:\n", num_interviewed + 1);
        printf("Nome: ");
        scanf("%s", interviewed[num_interviewed].name);
        printf("Idade: ");
        scanf("%d", &interviewed[num_interviewed].age);
        printf("Sexo (M/F): ");
        scanf(" %c", &interviewed[num_interviewed].sex);
        printf("Voto (1 a 10): ");
        scanf("%d", &interviewed[num_interviewed].vote);

        if (interviewed[num_interviewed].vote < 1 || interviewed[num_interviewed].vote > NUM_PLAYERS) {
            printf("(!)Voto invalido. Por favor, escolha um numero entre 1 e 10.\n");
            continue;
        }

        votes[interviewed[num_interviewed].vote - 1]++;
        num_interviewed++;

        if (num_interviewed >= MIN_INTERVIEWERS) {
            printf("\nNumero minimo de entrevistados atingido. A pesquisa pode ser finalizada.\n");
            break;
        }
    }

    // output data

    // report 1
    printf("\nRelatorio de votos:\n");
    for (i = 0; i < NUM_PLAYERS; i++) {
        printf("Jogadora %d: %d votos\n", i + 1, votes[i]);
    }

    // report 2
    printf("\nJogadoras mais votadas:\n");
    int max_votos = 0;
    for (i = 0; i < NUM_PLAYERS; i++) {
        if (votes[i] > max_votos) {
            max_votos = votes[i];
        }
    }
    for (i = 0; i < NUM_PLAYERS; i++) {
        if (votes[i] == max_votos) {
            printf("Jogadora %d\n", i + 1);
        }
    }

    // report 3
    printf("\nRelatorio de entrevistados:\n");
    for (i = 0; i < num_interviewed; i++) {
        printf("Nome: %s, Idade: %d, Sexo: %c\n", interviewed[i].name, interviewed[i].age, interviewed[i].sex);
    }

    // report 4
    printf("\nPessoas maiores de idade que votaram na Marta Vieira:\n");
    for (i = 0; i < num_interviewed; i++) {
        if (interviewed[i].age >= 18 && interviewed[i].vote == 1) {
            printf("%s\n", interviewed[i].name);
        }
    }

    // report 5
    int mulheres = 0;
    for (i = 0; i < num_interviewed; i++) {
        if (interviewed[i].sex == 'F') {
            mulheres++;
        }
    }
    printf("\nQuantidade de mulheres que participaram da pesquisa: %d\n", mulheres);

    return 0;
}
