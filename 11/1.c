#include <stdio.h>

// Function to find the greater of two numbers
int encontreMaior(int num1, int num2)
{
    int maior= num1;

    // Check if num2 is greater than num1
    if (maior < num2)
        maior = num2;

    return maior;
}

int main()
{
    // Call the function to find the greater number between 100 and 4
    int result = encontreMaior(100, 4);

    // Print the result
    printf("O maior numero eh: %i\n", result);

    return 0;
}
