#include <stdio.h>
#include <time.h>

void calculateAge(int birthDay, int birthMonth, int birthYear) {
    // Obter a data atual
    time_t currentTime;
    struct tm *localTime;
    time(&currentTime);
    localTime = localtime(&currentTime);

    // Calcular a diferença entre as datas
    int currentDay = localTime->tm_mday;
    int currentMonth = localTime->tm_mon + 1; // tm_mon é baseado em zero
    int currentYear = localTime->tm_year + 1900; // tm_year é o ano desde 1900

    int ageInDays, ageInMonths, ageInYears;

    if (birthDay > currentDay) {
        currentMonth--;
        currentDay += 30; // Assumindo que cada mês tem 30 dias
    }

    if (birthMonth > currentMonth) {
        currentYear--;
        currentMonth += 12;
    }

    ageInDays = currentDay - birthDay;
    ageInMonths = currentMonth - birthMonth;
    ageInYears = currentYear - birthYear;

    printf("Idade: %d anos, %d meses e %d dias\n", ageInYears, ageInMonths, ageInDays);
}

int main() {
    int birthDay = 25;
    int birthMonth = 9;
    int birthYear = 1996;

    calculateAge(birthDay, birthMonth, birthYear);

    return 0;
}
