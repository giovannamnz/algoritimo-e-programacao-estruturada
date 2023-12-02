#include <stdio.h>

// Function to determine the number of days in a month
void determineDias()
{
    int month, days;
    char *monthName;

    printf("Enter a number: ");
    scanf("%i", &month);

    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            if (month == 1)
                monthName = "Janeiro";
            else if (month == 3)
                monthName = "Marco";
            else if (month == 5)
                monthName = "Maio";
            else if (month == 7)
                monthName = "Julho";
            else if (month == 8)
                monthName = "Agosto";
            else if (month == 10)
                monthName = "Outubro";
            else if (month == 12)
                monthName = "Desembro";
            printf("Month: %s, Days: %i\n", monthName, days);
            break;

        case 4:
        case 6:
        case 11:
        case 9:
            days = 30;
            if (month == 4)
                monthName = "Abril";
            else if (month == 6)
                monthName = "Junho";
            else if (month == 11)
                monthName = "Novembro";
            else if (month == 9)
                monthName = "Setembro";
            printf("Month: %s, Days: %i\n", monthName, days);
            break;

        case 2:
            days = 28;
            monthName = "Fevereiro";
            printf("Month: %s, Days: %i\n", monthName, days);
            break;

        default:
            printf("Number not found...\n");
            break;
    }
}

int main()
{
    determineDias();

    return 0;
}
