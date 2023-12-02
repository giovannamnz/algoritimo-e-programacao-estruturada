#include <stdio.h>

// Function to calculate the Body Mass Index (BMI==IMC==indice de massa corporal)
float calculateIMC(float weight, float height)
{
    return weight / (height * height);
}

int main()
{
    float height, weight;

    printf("Digite seu peso (em kg): ");
    scanf("%f", &weight);

    printf("Digite sua algura (em m): ");
    scanf("%f", &height);

    // Calculate the BMI using the calculateBMI function
    float bmi = calculateIMC(weight, height);

    // Print the result
    printf("Seu imc eh: %.2f\n", bmi);

    return 0;
}
