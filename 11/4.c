#include <stdio.h>

// Function to calculate the volume of a cylinder
float calculateCylinderVolume(float radius, float height)
{
    return 3.1414592 * (radius * radius) * height;
}

int main()
{
    // Calculate the volume of a cylinder with radius 32 and height 12
    float cylinderVolume = calculateCylinderVolume(32, 12);

    // Print the result
    printf("O volume do cilindro eh: %.2f\n", cylinderVolume);

    return 0;
}
