#include <stdio.h>
#include <stdlib.h>

// Function to calculate the price with a 10% discount for cash payment
float cashPayment(float value)
{
    return value - (value * 0.10);
}

// Function to calculate the price for two installments (price as per label)
float twoInstallments(float value)
{
    return value / 2;
}

// Function to calculate the price with interest for 3 to 10 installments (only for purchases above R$ 100.00)
float installmentPayment(float value, int months)
{
    float interest;

    if (value <= 100)
        return value / months;
    else
    {
        interest = value * months * 0.03;
        return (value + interest) / months;
    }
}

// Function to get the total amount spent by the customer
float getSpentValue()
{
    float spentValue;

    printf("Digite o valor gasto: ");
    scanf("%f", &spentValue);

    return spentValue;
}

// Function to display payment options and return the chosen option
int paymentOptions()
{
    int option;

    printf("Selecione a opcao de pagamento:\n");
    printf("a) Em dinheiro com 10%% de desconto\n");
    printf("b) Duas parcelas\n");
    printf("c) 3 a 10 parcelas com 3%% de acrescimo por mes (apenas para gastos acima de R$ 100.00)\n");
    printf("Sua escolha (a/b/c): ");
    scanf(" %c", &option);

    return option;
}

// Function to calculate the total payment based on the chosen option
float calculatePayment(int option, float value)
{
    switch (option)
    {
        case 'a':
            return cashPayment(value);
        case 'b':
            return twoInstallments(value);
        case 'c':
            return installmentPayment(value, 10); // Assuming maximum of 10 installments
        default:
            return 0;
    }
}

int main()
{
    float totalValue, totalPayment;
    int chosenOption;

    // Get and validate the total amount spent
    totalValue = getSpentValue();

    // Select payment options
    do
    {
        chosenOption = paymentOptions();

        if (chosenOption != 'a' && chosenOption != 'b' && chosenOption != 'c')
            printf("Opcao invalida, favor adicionar .\n");
        if ((chosenOption == 'c') && (totalValue <= 100))
            printf("Valor muito baixo para o numero de parcelas (deve ser a vista ou duas parcelas).\n");

    } while ((chosenOption != 'a' && chosenOption != 'b' && chosenOption != 'c') ||
             ((chosenOption == 'c') && (totalValue <= 100)));

    // Calculate the total payment
    totalPayment = calculatePayment(chosenOption, totalValue);

    // Display results
    system("cls");
    printf("RESULTADOS\n");
    printf("Voce vai pagar R$%.2f por %i meses.\n", totalPayment, 10); // Assuming maximum of 10 installments

    return 0;
}
