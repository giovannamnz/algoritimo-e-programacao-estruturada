#include <stdio.h>

int main() {
    // variable declaration
    int countA_M = 0, countA_V = 0, countA_N = 0;
    int countB_M = 0, countB_V = 0, countB_N = 0;
    int countC_M = 0, countC_V = 0, countC_N = 0;

    // total number of residents
    int totalResidents = 5;

    printf("\nLevantamento anual acerca do uso do elevador social\n");
    printf("Sindico: Kevin Souza Silva Nascimento\n");
    printf("Data: 23/11/2023 as 20h | Brasilia - DF\n\n");

    // data entry
    for (int i = 1; i <= totalResidents; i++) {
        char elevator;
        char period;

        printf("Residente %d:\n", i);
        printf("Insira o elevador que voce usa (A, B ou C): ");
        scanf(" %c", &elevator);

        printf("Insira o periodo que voce usa (M, V, or N): ");
        scanf(" %c", &period);

        // input
        switch (elevator) {
            case 'A':
                if (period == 'M') countA_M++;
                else if (period == 'V') countA_V++;
                else countA_N++;
                break;
            case 'B':
                if (period == 'M') countB_M++;
                else if (period == 'V') countB_V++;
                else countB_N++;
                break;
            case 'C':
                if (period == 'M') countC_M++;
                else if (period == 'V') countC_V++;
                else countC_N++;
                break;
            default:
                printf("(!) Escolha de elevador invalida. Insira A, B ou C.\n");
        }
    }

    // data computing

    // total elevator usage for each period
    int totalM = countA_M + countB_M + countC_M;
    int totalV = countA_V + countB_V + countC_V;
    int totalN = countA_N + countB_N + countC_N;

    // the most used period
    char mostUsedPeriod;
    if (totalM >= totalV && totalM >= totalN) mostUsedPeriod = 'M';
    else if (totalV >= totalM && totalV >= totalN) mostUsedPeriod = 'V';
    else mostUsedPeriod = 'N';

    // the most used elevator
    char mostUsedElevator;
    if (countA_M + countA_V + countA_N >= countB_M + countB_V + countB_N &&
        countA_M + countA_V + countA_N >= countC_M + countC_V + countC_N) {
        mostUsedElevator = 'A';
    } else if (countB_M + countB_V + countB_N >= countC_M + countC_V + countC_N) {
        mostUsedElevator = 'B';
    } else {
        mostUsedElevator = 'C';
    }

    // percentage difference between most and least used periods
    int maxPeriodCount = (totalM > totalV) ? totalM : totalV;
    maxPeriodCount = (maxPeriodCount > totalN) ? maxPeriodCount : totalN;
    int minPeriodCount = (totalM < totalV) ? totalM : totalV;
    minPeriodCount = (minPeriodCount < totalN) ? minPeriodCount : totalN;
    double percentDifference = ((double)(maxPeriodCount - minPeriodCount) / totalResidents) * 100;

    // percentage of total services for the average-used elevator
    int totalAverage = (totalM + totalV + totalN) / 3;
    double percentAverageElevator = ((double)totalAverage / totalResidents) * 100;

    // data output
    printf("\nResultados:\n");
    printf("Periodo mais usado: %c\n", mostUsedPeriod);
    printf("Elevador mais usado: %c\n", mostUsedElevator);
    printf("Diferenca percentual entre os periodos mais e menos utilizados: %.2lf%%\n", percentDifference);
    printf("Porcentagem do total de servicos para o elevador medio utilizado: %.2lf%%\n", percentAverageElevator);

    return 0;
}
