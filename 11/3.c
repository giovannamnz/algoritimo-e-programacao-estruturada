#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float fToC(float Fahrenheit)
{
    return (Fahrenheit - 32.0) * (5.0 / 9.0);
}

// Function to get temperature in Fahrenheit from user
void getF()
{
    float temp;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temp);

    // Convert Fahrenheit to Celsius using the fToC function
    printf("%.2f Fahrenheit = %.2f Celsius\n", temp, fToC(temp));
}

int main()
{
    getF();

    return 0;
}
