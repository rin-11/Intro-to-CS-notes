// Complete the implementation of population.c, such that it calculates the number of years required for the population to grow from the start size to the end size.
    // Your program should first prompt the user for a starting population size.
        // If the user enters a number less than 9 (the minimum allowed population size), the user should be re-prompted to enter a starting population size until they enter a number that is greater than or equal to 9. (If we start with fewer than 9 llamas, the population of llamas will quickly become stagnant!)
    // Your program should then prompt the user for an ending population size.
        // If the user enters a number less than the starting population size, the user should be re-prompted to enter an ending population size until they enter a number that is greater than or equal to the starting population size. (After all, we want the population of llamas to grow!)
    // Your program should then calculate the (integer) number of years required for the population to reach at least the size of the end value.
    // Finally, your program should print the number of years required for the llama population to reach that end size, as by printing to the terminal Years: n, where n is the number of years.

    #include <stdio.h>

int main(void)
{
    int start_size;
    int end_size;

    // Prompt for start size
    do
    {
        printf("Enter starting population size (must be >= 9): ");
        scanf("%d", &start_size);
    }
    while (start_size < 9);

    // Prompt for end size
    do
    {
        printf("Enter ending population size (must be >= starting size): ");
        scanf("%d", &end_size);
    }
    while (end_size < start_size);

    // Calculate number of years until we reach the threshold
    int years = 0;
    while (start_size < end_size)
    {
        int births = start_size / 3;
        int deaths = start_size / 4;
        start_size = start_size + births - deaths;
        years++;
    }

    // Print the number of years
    printf("Years: %d\n", years);

    return 0;
}