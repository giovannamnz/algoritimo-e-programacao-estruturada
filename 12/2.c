#include <stdio.h>

// Function to calculate the number of free rentals based on the number of movies rented
int calculateFreeRentals(int rentedMovies)
{
    return rentedMovies / 15;
}

// Function to create an array of free rentals for each customer
void createFreeRentalsArray(int *initialArray, int size, int *finalArray)
{
    for (int i = 0; i < size; i++)
        finalArray[i] = calculateFreeRentals(initialArray[i]);
}

int main()
{
    const int MAX_CUSTOMERS = 500;
    int customerMovies[MAX_CUSTOMERS] = {3, 43, 15, 9};
    int freeRentals[MAX_CUSTOMERS] = {0};

    createFreeRentalsArray(customerMovies, MAX_CUSTOMERS, freeRentals);

    for (int i = 0; i < MAX_CUSTOMERS; i++)
        printf("Customer %i rented %i movies and has %i free rentals\n", i + 1, customerMovies[i], freeRentals[i]);

    printf("\n");

    return 0;
}
