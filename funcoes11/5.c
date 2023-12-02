#include <stdio.h>

// Function to calculate the volume of a sphere
float calculateSphereVolume(float radius)
{
    return (4.0 / 3.0) * 3.1414592 * radius * radius * radius;
}

int main()
{
    float radius;
    printf("Enter the radius: ");
    scanf("%f", &radius);

    // Calculate the volume of the sphere
    float volume = calculateSphereVolume(radius);

    // Print the result
    printf("Numero: %.2f, o volume eh: %.2f\n", radius, volume);

    return 0;
}
