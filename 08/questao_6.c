#include <stdio.h>

int main() {

    // variable declaration
    int month, year, days = 31;
    char answer;

    //input
    do {
        printf("Digite o mes [1-12]: ");
        scanf("%d", &month);
        printf("Digite o ano: ");
        scanf("%d", &year);

        if (month < 1 || month > 12) {
            printf("(!) mes invalido. Digite um numero entre 1 e 12.\n");
            continue;
        }

        // Checking leap years
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            if (month == 2) {
                days = 29; // February has 29 days in leap years
            }
        } else {
            if (month == 2) {
                days = 28; // February has 28 days in non-leap years
            } else if (month == 4 || month == 6 || month == 9 || month == 11) {
                days = 30; // Months with 30 days
            }
        }

        //output
        printf("O mes %d/%d possui %d dias.\n", month, year, days);

        printf("VOCE DESEJA OUTRAS ENTRADAS (S/?)? ");
        scanf(" %c", &answer);
    } while (answer == 'S' || answer == 's');
    printf("Programa encerrado. Obrigado!\n");

    return 0;
}
